cmake_minimum_required(VERSION 3.30)
project(epc CXX)

find_package(rapidxml REQUIRED)
find_package(argparse REQUIRED)
find_package(spdlog REQUIRED)

add_subdirectory(main)
add_subdirectory(modules)
