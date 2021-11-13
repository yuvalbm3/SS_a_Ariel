cmake_minimum_required(VERSION 3.20)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_library(math basicClassification.c dvancedClassificationRecursion.c)

add_executable(untitled main.c NumClass.h basicClassification.c advancedClassificationLoop.c dvancedClassificationRecursion.c NumClass.h)
