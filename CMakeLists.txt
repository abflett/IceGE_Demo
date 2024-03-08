cmake_minimum_required(VERSION 3.28)
project(IceGE_Demo)

add_subdirectory(external/IceGE)

# Include directory for IceGE library (optional but improves clarity)
set(ICEGE_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external/IceGE/include)

set(GAME_DEMO_SRCS src/IceGE_Demo/main.cpp)

add_executable(IceGE_Demo ${GAME_DEMO_SRCS})

target_include_directories(IceGE_Demo PUBLIC ${ICEGE_INCLUDE_DIR})
target_link_libraries(IceGE_Demo PRIVATE IceGE)