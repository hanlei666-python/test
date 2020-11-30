/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.39
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Wed Nov 18 11:54:47 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <stdio.h>
#include <stdlib.h>
#include "untitled.h"
#include "untitled_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "unistd.h"
#include "fcntl.h"
#include "errno.h"
#include "debug.h"
#include "time.h"
#include "math.h"
#include "poll.h"
#include "px4_posix.h"
#include "px4_tasks.h"
#include "unistd.h"
#include "uORB/uORB.h"
#include "uORB/topics/sensor_combined.h"
#include "uORB/topics/vehicle_attitude.h"
#include "uORB/topics/optical_flow.h"
#include "px4_config.h"
#include "px4_tasks.h"
#include "px4_posix.h"
#include "string.h"
#include "drivers/drv_led.h"
#include "drivers/drv_pwm_output.h"
#include "drivers/drv_rc_input.h"
#include "drivers/drv_hrt.h"
#include "arch/board/board.h"
#include "sys/mount.h"
#include "sys/ioctl.h"
#include "sys/stat.h"
#include "systemlib/perf_counter.h"
#include "systemlib/systemlib.h"
#include "systemlib/err.h"
#include "systemlib/param/param.h"
#include "nuttxinitialize.h"
#define UNUSED(x)                      x = x

/* Function prototype declaration*/
void exitFcn(int sig);
void *terminateTask(void *arg);
void *baseRateTask(void *arg);
void *subrateTask(void *arg);
volatile boolean_T runModel = true;
sem_t stopSem;
sem_t baserateTaskSem;
extern sem_t PX4_Simulink_Task_Sem;
extern struct hrt_call BaseRate_HRT;
extern void (*MW_model_init)(void);
extern void (*MW_model_term)(void);
void PX4_Simulink_Task_Callback(void *arg);
extern void PX4_Simulink_Task_Callback_Test(void *arg);
pthread_t schedulerThread;
pthread_t baseRateThread;
unsigned long threadJoinStatus[8];
int terminatingmodel = 0;
void *baseRateTask(void *arg)          //multi-rate single-tasking
{
  runModel = (rtmGetErrorStatus(untitled_M) == (NULL));
  while (runModel) {
    sem_wait(&baserateTaskSem);
    untitled_step();

    /* Get model outputs here */
    runModel = (rtmGetErrorStatus(untitled_M) == (NULL));
  }

  runModel = 0;
  terminateTask(arg);
  pthread_exit((void *)0);
  return NULL;
}

void exitFcn(int sig)
{
  UNUSED(sig);
  rtmSetErrorStatus(untitled_M, "stopping the model");
}

void *terminateTask(void *arg)
{
  UNUSED(arg);
  terminatingmodel = 1;
  printf("**terminating the model**\n");
  fflush(stdout);

  {
    runModel = 0;
  }

  sem_post(&stopSem);
  return NULL;
}

int px4_simulink_app_main(int argc, char *argv[]) //PX4 Simulink App
{
  rtmSetErrorStatus(untitled_M, 0);
  int PX4_Simulink_Task_PID = 0;
  if (argc < 1)
    px4_app_usage("missing command");
  if (!strcmp(argv[1], "start")) {
    if (g_baseRateLife == false) {
      /* Start the Simulink Tasks here */
      printf("**starting the model**\n");
      fflush(stdout);

      /* Initialize function pointers */
      MW_model_init = &untitled_initialize;
      MW_model_term = &untitled_terminate;

      /* Reset semaphore */
      g_baseRateLife = true;
      sem_init(&PX4_Simulink_Task_Sem,0,0);

      /* Create task */
      PX4_Simulink_Task_PID = task_create("PX4_Simulink_Task", 100, 2048, (void *)
        PX4_Simulink_Task_Callback, (void *) &PX4_Simulink_Task_PID);
    } else {
      PX4_INFO("\t**model is already running**\n");
      fflush(stdout);
    }

    exit(0);
  }

  if (!strcmp(argv[1], "stop")) {
    if (g_baseRateLife == true) {
      rtmSetErrorStatus(untitled_M, "Module finished");
      g_baseRateLife = false;
      sem_post(&baserateTaskSem);

      /* wait until the tasks completely finish */
      PX4_INFO("exiting model... waiting on stopSem...");

      /* Wait for stop semaphore */
      sem_wait(&stopSem);
      sem_post(&PX4_Simulink_Task_Sem);
    } else {
      PX4_INFO("\t**model is not running**\n");
      fflush(stdout);
    }

    exit(0);
  }

  if (!strcmp(argv[1], "status")) {
    if (g_baseRateLife) {
      PX4_INFO("\trunning\n");
    } else {
      PX4_INFO("\tnot started\n");
    }

    exit(0);
  }

  px4_app_usage("unrecognized command");
  return 1;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
