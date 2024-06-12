# Reinforcement Learning: An Introduction in C++
Work in progress C++ implementation of [Sutton &amp; Barto Reinforcement Learning: An Introduction 2nd Ed](http://incompleteideas.net/book/the-book.html). Closely follows the official Python version found here https://github.com/ShangtongZhang/reinforcement-learning-an-introduction

## Requirements

Install the Clang/LLVM compiler (optional, you can use `g++` instead)
*    MacOS comes with clang pre-installed
*    Ubuntu/Debian/Windows WSL `sudo apt install clang`
*    Verify installation `clang++ --version`

Install CMake (generates build files)
*    MacOS `brew install cmake`
*    Ubuntu/Debian/Windows WSL `sudo apt install cmake`
*    Verify installation `cmake --version`

## Build
Scripts for each chapter can be found in `src`. To compile all executables for
the first time (or recompile) and run a particular script: 

*   `cd build` 
*   `cmake -D CMAKE_EXPORT_COMPILE_COMMANDS=ON ..` (looks for `CMakeLists.txt` 
    in the project root directory and generates all build files inside `build`) 
*   `cmake -D CMAKE_EXPORT_COMPILE_COMMANDS=ON -D CMAKE_CXX_COMPILER=clang++ ..` 
    instead if you want to use Clang.
*   Run `make` inside `build` to build all scripts.
*   Run `./your-executable` to run a single script's executable.

To recompile from scratch, simply
*   `rm -rf build/*`
*   `cd build`
*   `cmake -D CMAKE_EXPORT_COMPILE_COMMANDS=ON ..` or `cmake -D CMAKE_EXPORT_COMPILE_COMMANDS=ON -D CMAKE_CXX_COMPILER=clang++ ..` 
*   `make` 

## Contents
Ch 1: Tic-tac-toe agent trained with temporal difference learning