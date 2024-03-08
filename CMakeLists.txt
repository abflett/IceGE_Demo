cmake_minimum_required(VERSION 3.28)
project(IceGE_Demo)

find_package(IceGELib REQUIRED)  # Find and link with the interface library
target_link_libraries(IceGE_Demo PRIVATE IceGELib)

# Include the IceGEConfig.h header for access to IceGE API
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/external/IceGE/include)

set(GAME_DEMO_SRCS src/IceGE_Demo/main.cpp)

# Create the game demo executable
add_executable(IceGE_Demo ${GAME_DEMO_SRCS})