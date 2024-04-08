# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(demo_1 VERSION 1.0 LANGUAGES C CXX)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# define the c++ standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_executable(struct_exec struct.cpp)