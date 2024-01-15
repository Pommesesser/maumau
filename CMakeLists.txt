cmake_minimum_required(VERSION 3.27)
project(MauMau2 C)

set(CMAKE_C_STANDARD 11)

add_executable(MauMau2 main.c
        card.c
        card.h
        debug.c
        debug.h
)
