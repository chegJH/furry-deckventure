cmake_minimum_required(VERSION 3.0)
project(DeckGame VERSION 0.1)
set(CMAKE_CXX_STANDARD 14)

include_directories(src)
add_subdirectory(src)
# include_directories(src/CMakeLists.txt)
# add_executable(game ${game_SOURCES})
