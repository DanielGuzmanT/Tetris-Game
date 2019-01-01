//
// Created by jhair on 31/12/18.
//

#include "Piece.h"

#include "BLOCKS.h"

# include <cstdlib>
# include <ctime>


Piece::Piece() {
    // classical random number generator. To improve it, check
    // http://itscompiling.eu/2016/04/11/generating-random-numbers-cpp/
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    this->x = 0;
    this->y = 0;

    this->kind = 0;
    this->rott = 0;
}

void Piece::randomInit() {
    // new block with new rotation
    this->kind = std::rand() % BLOCK::KIND;
    this->rott = std::rand() % BLOCK::ROTT;

    // new position
    this.x = POSITION::START_X;
    this.y = POSITION::START_Y;
}

void Piece::move(int move_x, int move_y) {
    this->x += move_x;
    this->y += move_y;
}

