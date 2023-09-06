cmake_minimum_required(VERSION 3.5)

# override COMPONENTS to just build our own app
set(COMPONENTS main)

include($ENV{ADF_PATH}/CMakeLists.txt)
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(esp_adf_skel)
