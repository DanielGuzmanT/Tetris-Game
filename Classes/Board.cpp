//
// Created by jhair on 31/12/18.
//

#include "Board.h"
#include "BLOCKS.h"
#include <iostream>

Board::Board(Piece *piece)
    : piece(piece) {

    // creating the game board
    this->board = new int*[BOARD::HEIGHT];

    for(int h=0; h<BOARD::HEIGHT; ++h){
        this->board[h] = new int[BOARD::WIDTH];
        for (int w=0; w<BOARD::WIDTH; ++w) {
            // only first and last column, and base of the board will be 1. Blocks inside will be 0.
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



// board updates because of a movement of the piece, or a new random piece
void Board::update() {
    // draw block
    for (int v=0; v<BLOCK::VERT; ++v) {
        for (int h=0; h<BLOCK::HORZ; ++h) {
            this->board[this->piece.y+v][this->piece->x+h] = 1;
        }
    }
}

void Board::eraseBlock() {
    // erase actual block
    for (int v=0; v<BLOCK::VERT; ++v) {
        for (int h=0; h<BLOCK::HORZ; ++h) {
            if (mPieces[piece->kind][piece->rott][v][h] >= 1){
                this->board[piece->y+v][piece->x+h] = 0;
            }

        }
    }
}

