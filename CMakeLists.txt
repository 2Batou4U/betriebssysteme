cmake_minimum_required(VERSION 3.26)
project(betriebssysteme C)

set(CMAKE_C_STANDARD 11)

add_executable(betriebssysteme prog00/main.c
        prog00/guess.c
        prog00/guessing.h)
