cmake_minimum_required(VERSION 3.20.0)

project(number_game)
add_executable(game 
src/main.cpp 
src/game.cpp 
src/singleplayer.cpp 
src/multiplayer.cpp 
src/dice.cpp 
src/result.cpp 
src/player.cpp)