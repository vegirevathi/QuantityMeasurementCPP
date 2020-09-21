cmake_minimum_required(VERSION 3.18.2) 

project(QuantityMeasurement)

add_subdirectory(googletest) 

include_directories(googletest/include) 

add_executable(executeTests main/QuantityMeasurement.cpp test/QuantityMeasurementTest.cpp main/QuantityMeasurement.h) 

target_link_libraries(executeTests PRIVATE gtest)