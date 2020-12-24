cmake_minimum_required(VERSION 3.17)
project(Generate_Tool_CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(Generate_Tool_CPP main.cpp FileParser.cpp FileParser.h FileWriter.cpp FileWriter.h Register.cpp Register.h test_hw_sysctl.h BitField.cpp BitField.h Module.cpp Module.h hw_sysctl.h Project_Common.h)