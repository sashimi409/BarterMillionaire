cmake_minimum_required (VERSION 3.0)
project (BarterMillionaire)
add_subdirectory(BasicParse)


file(GLOB SOURCES src/*.cpp)

include_directories(includes)


add_executable(BarterMillionaire ${SOURCES})
target_link_libraries(BarterMillionaire BasicParse)