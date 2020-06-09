cmake_minimum_required (VERSION 3.0)
project (BarterMillionaire)
add_subdirectory(BasicParse)


file(GLOB SOURCES src/*.cpp)

#add interface to be built with the project
#if windows
if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    set(DRIVER src/Interfaces/windows.cpp)

#if unix
else()
    set(DRIVER src/Interfaces/unix.cpp)

endif()

include_directories(includes)


add_executable(BarterMillionaire ${DRIVER} ${SOURCES})
target_link_libraries(BarterMillionaire BasicParse)
