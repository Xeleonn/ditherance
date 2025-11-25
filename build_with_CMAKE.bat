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

REM Delete all files
del /q *.* 2>nul

REM Delete all subfolders
for /d %%D in (*) do (
    rmdir /s /q "%%D"
)

REM Run CMake generator
cmake -G "MinGW Makefiles" ..

REM Stop if CMake failed
if errorlevel 1 (
    echo CMake failed.
    exit /b %errorlevel%
)

REM Build using MinGW make
mingw32-make -j

REM Exit CMD
exit /b