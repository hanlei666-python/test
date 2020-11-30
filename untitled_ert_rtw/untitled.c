/*
 * File: untitled.c
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

#include "untitled.h"
#include "untitled_private.h"

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  /* S-Function (sfun_px4_uorb_write): '<Root>/uORB Write Advanced2' incorporates:
   *  Constant: '<Root>/Constant12'
   *  Constant: '<Root>/Constant13'
   *  Constant: '<Root>/Constant14'
   *  Constant: '<Root>/Constant17'
   *  Constant: '<Root>/Constant18'
   *  Constant: '<Root>/Constant19'
   */
  {
    //struct position_setpoint_s InputStruct;
    //memset( &InputStruct, 0, sizeof(InputStruct));

    /* assign input parameters to struct */
    untitled_DW.uORBWriteAdvanced2_uorb_msg.valid = true;
    untitled_DW.uORBWriteAdvanced2_uorb_msg.type = ((uint8_T)0U);
    untitled_DW.uORBWriteAdvanced2_uorb_msg.x = 1.0F;
    untitled_DW.uORBWriteAdvanced2_uorb_msg.y = 1.0F;
    untitled_DW.uORBWriteAdvanced2_uorb_msg.z = 1.0F;
    untitled_DW.uORBWriteAdvanced2_uorb_msg.position_valid = true;

    /* Publish data for subscribers */
    orb_publish(ORB_ID(position_setpoint),
                untitled_DW.uORBWriteAdvanced2_uorb_advert,
                &untitled_DW.uORBWriteAdvanced2_uorb_msg);
  }
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(untitled_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&untitled_DW, 0,
                sizeof(DW_untitled_T));

  /* Start for S-Function (sfun_px4_uorb_write): '<Root>/uORB Write Advanced2' incorporates:
   *  Constant: '<Root>/Constant12'
   *  Constant: '<Root>/Constant13'
   *  Constant: '<Root>/Constant14'
   *  Constant: '<Root>/Constant17'
   *  Constant: '<Root>/Constant18'
   *  Constant: '<Root>/Constant19'
   */
  {
    /* S-Function Block: <Root>/uORB Write Advanced2 */
    /* Initializing topic: position_setpoint */
    struct position_setpoint_s initialize_topic;
    memset( &initialize_topic, 0, sizeof(initialize_topic));
    untitled_DW.uORBWriteAdvanced2_uorb_advert = orb_advertise(ORB_ID
      (position_setpoint), &initialize_topic);
    if (untitled_DW.uORBWriteAdvanced2_uorb_advert != 0) {
      PX4_INFO("Started advertising position_setpoint");
    }
  }

  /* Start for S-Function (sfun_px4_uorb_write): '<Root>/uORB Write Advanced1' incorporates:
   *  Constant: '<Root>/Constant4'
   */
  {
    /* S-Function Block: <Root>/uORB Write Advanced1 */
    /* Initializing topic: offboard_control_mode */
    struct offboard_control_mode_s initialize_topic;
    memset( &initialize_topic, 0, sizeof(initialize_topic));
    untitled_DW.uORBWriteAdvanced1_uorb_advert = orb_advertise(ORB_ID
      (offboard_control_mode), &initialize_topic);
    if (untitled_DW.uORBWriteAdvanced1_uorb_advert != 0) {
      PX4_INFO("Started advertising offboard_control_mode");
    }
  }

  /* ConstCode for S-Function (sfun_px4_uorb_write): '<Root>/uORB Write Advanced1' incorporates:
   *  Constant: '<Root>/Constant4'
   */
  {
    //struct offboard_control_mode_s InputStruct;
    //memset( &InputStruct, 0, sizeof(InputStruct));

    /* assign input parameters to struct */
    untitled_DW.uORBWriteAdvanced1_uorb_msg.ignore_thrust = false;
    untitled_DW.uORBWriteAdvanced1_uorb_msg.ignore_attitude = false;
    untitled_DW.uORBWriteAdvanced1_uorb_msg.ignore_bodyrate = false;
    untitled_DW.uORBWriteAdvanced1_uorb_msg.ignore_position = false;
    untitled_DW.uORBWriteAdvanced1_uorb_msg.ignore_velocity = false;
    untitled_DW.uORBWriteAdvanced1_uorb_msg.ignore_acceleration_force = true;
    untitled_DW.uORBWriteAdvanced1_uorb_msg.ignore_alt_hold = false;

    /* Publish data for subscribers */
    orb_publish(ORB_ID(offboard_control_mode),
                untitled_DW.uORBWriteAdvanced1_uorb_advert,
                &untitled_DW.uORBWriteAdvanced1_uorb_msg);
  }
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for S-Function (sfun_px4_uorb_write): '<Root>/uORB Write Advanced2' incorporates:
   *  Constant: '<Root>/Constant12'
   *  Constant: '<Root>/Constant13'
   *  Constant: '<Root>/Constant14'
   *  Constant: '<Root>/Constant17'
   *  Constant: '<Root>/Constant18'
   *  Constant: '<Root>/Constant19'
   */

  /* Close uORB service used in the S-Function Block: <Root>/uORB Write Advanced2 */
  orb_unadvertise(untitled_DW.uORBWriteAdvanced2_uorb_advert);

  /* Terminate for S-Function (sfun_px4_uorb_write): '<Root>/uORB Write Advanced1' incorporates:
   *  Constant: '<Root>/Constant4'
   */

  /* Close uORB service used in the S-Function Block: <Root>/uORB Write Advanced1 */
  orb_unadvertise(untitled_DW.uORBWriteAdvanced1_uorb_advert);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
