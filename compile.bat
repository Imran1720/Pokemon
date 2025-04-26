@echo off

g++ -Iinclude Main.cpp src\*\*\*.cpp src\*\*.cpp -o pokemon.exe
cls
pokemon.exe
pause