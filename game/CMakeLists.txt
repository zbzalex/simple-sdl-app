cmake_minimum_required(VERSION 3.19)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(game)

enable_language(CXX)
enable_language(C)

find_package(OpenGL REQUIRED)
find_package(SDL2   REQUIRED)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${SDL2_INCLUDE_DIRS}
)

add_library(game
    SHARED
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Game.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Input.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Renderer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/SDLRenderer.cpp
)

target_link_libraries(game
    PUBLIC
    ${SDL2_LIBRARIES}
    ${OPENGL_LIBRARY}
)
