@echo off
setlocal

REM Change to the directory where this script is located
cd /d "%~dp0"

REM Create build folder if it doesn't exist
if not exist build (
    mkdir build
)

REM Go into the build folder
cd build || (
    echo Failed to access build directory.
    exit /b 1
)

REM Run MinGW make (no CMake step)
mingw32-make -j

REM Exit CMD
exit /b