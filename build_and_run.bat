@echo off
set COMPILER=g++
set INCLUDE_DIR=include
set SRC_DIR=src
set TARGET=main.exe

echo Compilando el proyecto...
%COMPILER% -I %INCLUDE_DIR% %SRC_DIR%\*.cpp -o %TARGET%

if %ERRORLEVEL% NEQ 0 (
    echo Error en la compilación.
    exit /b %ERRORLEVEL%
)

echo Compilación exitosa.
echo Ejecutando el programa...
%TARGET%
