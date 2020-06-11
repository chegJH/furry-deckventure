# file(GLOB SOURCES GameTable.* game.cpp)
# add_executable(game ${SOURCES})

list(APPEND game_SOURCES
${CMAKE_CURRENT_LIST_DIR}/game.cpp
${CMAKE_CURRENT_LIST_DIR}/GameTable.cpp
${CMAKE_CURRENT_LIST_DIR}/GameTable.h
)
add_executable(game ${game_SOURCES})
