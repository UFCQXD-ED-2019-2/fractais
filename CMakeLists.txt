cmake_minimum_required(VERSION 3.15)
project(ed1_fractais)

set(CMAKE_CXX_STANDARD 17)

set(SFML_INCLUDE_DIR "/usr/include/SFML")
include_directories(SFML_INCLUDE_DIR)

add_executable(ed1_fractais fractais.cpp lib/pen.cpp lib/cpen.cpp lib/sfline.cpp)
target_link_libraries (ed1_fractais sfml-graphics sfml-window sfml-system)