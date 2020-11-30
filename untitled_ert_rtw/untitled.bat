cd .

if "%1"=="" ("E:\matlab\bin\win64\gmake"  -f untitled.mk postdownload_preexecute all) else ("E:\matlab\bin\win64\gmake"  -f untitled.mk postdownload_preexecute %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
