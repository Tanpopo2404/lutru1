call "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Common7\Tools\..\..\VC\Auxiliary\Build\VCVARSALL.BAT" AMD64

cd .

if "%1"=="" (nmake  -f gencode.mk all) else (nmake  -f gencode.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
