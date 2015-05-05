@echo off
setlocal ENABLEDELAYEDEXPANSION

if "%DEVENVDIR%" == "" (
    if exist "%VS120COMNTOOLS%" (
        call "%VS120COMNTOOLS%vsvars32.bat"
        if ERRORLEVEL 1 (
            echo Unable to initialize Visual Studio 2013 build environment
            GOTO Error
        )
    ) else (
        echo Unable to initialize Visual Studio 2013 build environment
        GOTO Error
    )
)

devenv /useenv

EXIT /B 0
:Error
EXIT /B 1