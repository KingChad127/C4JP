cmake_minimum_required(VERSION 3.21)
project(C4JP C)

set(CMAKE_C_STANDARD 99)

add_executable(HelloWorld hello.c)
add_executable(Endianness endianness.c)
add_executable(OtherTypes OtherTypes.c)
add_executable(Functions functions.c)
add_executable(Pointers pointers.c)
add_executable(Arrays arrays.c)
add_executable(Strings strings.c)
add_executable(Hamming hamming_distance.c)