//
// Created by jhair on 31/12/18.
//

#ifndef TETRIS_BOARD_H
#define TETRIS_BOARD_H

#include "Piece.h"

class Board {
private:
    Piece* piece;
    int** board;
public:
    // explicit to avoid implicit convertion
    explicit Board(Piece *piece);
    void draw();
};


#endif //TETRIS_BOARD_H
