cmake_minimum_required(VERSION 3.12)
project(tetris)

set(CMAKE_CXX_STANDARD 14)

add_executable(tetris main.cpp Classes/BLOCKS.h Classes/Game.cpp Classes/Game.h Classes/Piece.cpp Classes/Piece.h Classes/Board.cpp Classes/Board.h)