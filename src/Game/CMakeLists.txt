# file(GLOB SOURCES GameTable.* game.cpp)
list(APPEND game_SOURCES
${CMAKE_CURRENT_LIST_DIR}/game.cpp
${CMAKE_CURRENT_LIST_DIR}/Table.cpp
${CMAKE_CURRENT_LIST_DIR}/Table.h
)
add_executable(game ${game_SOURCES})
