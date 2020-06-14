cmake_minimum_required (VERSION 3.0)
project (BarterMillionaire)
add_subdirectory(BasicParse)


file(GLOB SOURCES src/*.cpp)

#add Display interface to be built with the project
#if windows
if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    set(DRIVER src/Interfaces/Windows/DisplayInterface.cpp)

#if unix
else()
    set(DRIVER src/Interfaces/Unix/DisplayInterface.cpp)

endif()

include_directories(includes)


add_executable(BarterMillionaire ${DRIVER} ${SOURCES})
target_link_libraries(BarterMillionaire BasicParse)
