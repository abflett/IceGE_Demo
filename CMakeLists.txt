cmake_minimum_required(VERSION 3.28)
project(IceGE_Demo)

add_subdirectory(external/IceGE)

set(GAME_DEMO_SRCS src/IceGE_Demo/main.cpp)

add_executable(IceGE_Demo ${GAME_DEMO_SRCS})

target_link_libraries(IceGE_Demo PRIVATE IceGE)