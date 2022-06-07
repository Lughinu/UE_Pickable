@echo off
title Remove Inutility Tool  v. 0.1
cls
color 07

:RICHIESTA
echo Remove Inutility Tool  v. 0.1
echo.
echo Cosa vuoi cancellare?
echo 1. I file di UE4 Editor
echo 2. I file di Visual Studio
echo 3. Tutti i file
echo 4. Esci
echo.
set /p "Scelta=Scegli un'opzione e premi il tasto Invio: "
cls
IF "%Scelta%"=="1" GOTO UNO
IF "%Scelta%"=="2" GOTO DUE
IF "%Scelta%"=="3" GOTO TRE
IF "%Scelta%"=="4" GOTO QUATTRO
color 07
echo.
echo Scelta non valida: premi un tasto compreso tra 1 e 4.
echo.
echo Premi un tasto per continuare...
pause > nul
cls
color 07
goto RICHIESTA

:UNO
echo.
call:del_ue4_files 

goto QUATTRO

:DUE
echo.
call:del_vs_files
goto QUATTRO

:TRE
echo.
call:del_ue4_files
call:del_vs_files
goto QUATTRO

:QUATTRO
echo Premi un tasto per continuare...
pause > nul
exit /b

::--------------------------------------------------------
::-- Function section starts below here
::--------------------------------------------------------

:del_ue4_files
rmdir Intermediate /s /q
rmdir Build /s /q
rmdir Binaries /s /q
rmdir Saved /s /q
goto:eof

:del_vs_files
rmdir .vs /s /q
del *.sln
del *.sdf
del *.suo.doc
del *.sln.txt
del *.VC.opendb
goto:eof