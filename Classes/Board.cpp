//
// Created by jhair on 31/12/18.
//

#include "Board.h"
#include <iostream>

enum BOARD {HEIGHT=40, WIDTH=15};

Board::Board(Piece *piece)
    : piece(piece) {

    // creating the game board
    this->board = new int*[BOARD::HEIGHT];

    for(int h=0; h<BOARD::HEIGHT; ++h){
        this->board[h] = new int[BOARD::WIDTH];
        for (int w=0; w<BOARD::WIDTH; ++w) {
            this->board[h][w] = (h==0 || h==(BOARD::WIDTH-1) || (w==BOARD::WIDTH-1)) ? 1 : 0;
        }
    }
}


// fix it to print in the same area (different codes for Linux and for Windows)
void Board::draw() {
    for(int h=0; h<BOARD::HEIGHT; ++h){
        for (int w=0; w<BOARD::WIDTH; ++w) {
            std::cout.put((this->board[h][w] == 1) ? (char)178 : ' ');
        }
        std::cout.put('\n');
    }

    std::cout << std::endl;
}

