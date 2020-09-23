cmake_minimum_required(VERSION 3.18.2) 

project(QuantityMeasurement)

add_subdirectory(googletest) 

include_directories(googletest/include) 

add_executable(executeTests main/QuantityMeasurement.cpp test/QuantityMeasurementTest.cpp main/QuantityMeasurement.h
                            main/Feet.cpp main/Feet.h main/Inch.cpp main/Inch.h main/Length.h main/Length.cpp) 

target_link_libraries(executeTests PRIVATE gtest)