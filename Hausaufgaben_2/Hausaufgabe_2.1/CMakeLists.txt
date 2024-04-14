# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(homework_1_7 VERSION 1.0 LANGUAGES C CXX)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# define the c++ standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

# add a library for your student structure
add_library(student_struct src/student.cpp)
# add the includes to the library
target_include_directories(student_struct PUBLIC include)

# add an executabel and assign files to it
add_executable(student_struct_hw7_exec src/main_2.1.cpp)

# add include directories to executable
target_include_directories(student_struct_hw7_exec PRIVATE include)
# link your libraries
target_link_libraries(student_struct_hw7_exec PRIVATE student_struct)
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)
add_executable(tests test/test_student_struct.cpp)
target_link_libraries(tests PRIVATE GTest::GTest GTest::Main)
target_link_libraries(tests PRIVATE student_struct)
target_include_directories(tests PUBLIC include)
gtest_discover_tests(tests)