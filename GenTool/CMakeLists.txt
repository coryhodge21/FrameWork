cmake_minimum_required(VERSION 3.17)
project(GenTool)

set(CMAKE_CXX_STANDARD 20)

add_executable(GenTool main.cpp FileWriter.cpp FileWriter.h FileParser.cpp FileParser.h Module.cpp Module.h Register.cpp Register.h BitField.cpp BitField.h FileWriter_creators.cpp FileWriter_Templates.cpp FileWriter_Writers.cpp hw_sysctl.h Project_Common.h)