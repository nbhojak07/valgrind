# Overview

Simple C++ project to work with:
- cmake 
- googletest
- valgrind 

## Standard install via command line
- Go to the folder where you want to clone this repository.
- Right-click on empty space and select Open in Terminal.
- Run the commands stated below:

```
git clone --recursive https://github.com/dpiet/cpp-boilerplate
cd <path to repository>
mkdir build
cd build
cmake ..
make
./app/shell-app
```
## Location of output files 
All output files are located in the results sub-directory.
There are 3 files: valgrind_before_fix.txt, valgrind_after_fix.txt, KCahceGrind_profiler_output.png

## Working with Valgrind
## Installation
Check if valgrind is installed on your machine.
```
valgrind --version
```
If not installed, install using the following command:
```
sudo apt install valgrind
```
## Run
Complete the Standard install via command-line section before moving ahead
Go to the project directory, open the build sub-directory in Terminal, and run:
```
valgrind ./app/shell-app
```
To check leaks in the project, run:
Go to the project directory, open the build sub-directory in Terminal, and run:
```
valgrind --leak-check=full ./app/shell-app
```
To check the function and memory profiler output, run:
```
valgrind --tool=callgrind ./app/shell-app
```


