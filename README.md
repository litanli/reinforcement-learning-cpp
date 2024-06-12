# Reinforcement Learning: An Introduction in C++
Work in progress C++ implementation of [Sutton &amp; Barto Reinforcement Learning: An Introduction 2nd Ed](http://incompleteideas.net/book/the-book.html). Closely follows the official Python version found here https://github.com/ShangtongZhang/reinforcement-learning-an-introduction

## Build
Scripts for each chapter can be found in `src`. To compile all executables for
the first time (or recompile) and run a particular script: 

*   `cd` into `build` 
*   Run `cmake -D CMAKE_EXPORT_COMPILE_COMMANDS=ON ..`  which looks for `CMakeLists.txt` in the project root directory and generates all build files inside `build`. 
*   Run `make` inside `build` to compile all scripts.
*   Run `./your-executable` to run one of the scripts.

To recompile from scratch, simply
*   `rm -rf build/*`
*   `cd build`
*   `cmake -D CMAKE_EXPORT_COMPILE_COMMANDS=ON ..`
*   `make`