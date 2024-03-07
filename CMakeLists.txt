cmake_minimum_required(VERSION 3.28)
project(IceGE_Demo)

set(ICEGE_DIR ${PROJECT_SOURCE_DIR}/external/IceGE)

# Include IceGE's CMakeLists.txt from the submodule
include(${ICEGE_DIR}/CMakeLists.txt)

set(GAME_DEMO_SRCS
    src/IceGE_Demo/main.cpp
)

# Create the game demo executable
add_executable(IceGE_Demo ${GAME_DEMO_SRCS})

# Link the game demo with the IceGE library (use from submodule)
target_link_libraries(IceGE_Demo PRIVATE IceGE)
