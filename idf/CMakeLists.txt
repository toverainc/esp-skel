cmake_minimum_required(VERSION 3.5)

# override COMPONENTS to just build our own app
set(COMPONENTS main)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(esp_idf_skel)
