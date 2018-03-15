cmake_minimum_required(VERSION 3.9)

set(CMAKE_C_STANDARD 99)
set(RENDERING_SERVICE librenderingService.dylib)
link_directories(/usr/local/lib)
include_directories(/usr/local/include)

add_executable(renderer main.c)
TARGET_LINK_LIBRARIES(renderer ${RENDERING_SERVICE})