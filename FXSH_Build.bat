@echo off
rem Do not edit! This batch file is created by CASIO fx-9860G SDK.


if exist 15062020.G1A  del 15062020.G1A

cd debug
if exist FXADDINror.bin  del FXADDINror.bin
"C:\Program Files\CASIO\fx-9860G SDK\OS\SH\Bin\Hmake.exe" Addin.mak
cd ..
if not exist debug\FXADDINror.bin  goto error

"C:\Program Files\CASIO\fx-9860G SDK\Tools\MakeAddinHeader363.exe" "C:\Users\Luca\Desktop\Abschlusspr�fung"
if not exist 15062020.G1A  goto error
echo Build has completed.
goto end

:error
echo Build was not successful.

:end

