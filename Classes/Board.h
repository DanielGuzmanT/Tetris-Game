//
// Created by jhair on 31/12/18.
//

#ifndef TETRIS_BOARD_H
#define TETRIS_BOARD_H

#include "Piece.h"

enum BOARD {HEIGHT=40, WIDTH=15};
enum STATE {ALL_OK=200, NEW_PIECE_REQUIRED=300, GAME_OVER=400};

class Board {
private:
    Piece* piece;
    int** board;
    int state;
public:
    // explicit to avoid implicit convertion
    explicit Board(Piece *piece);
    void draw();
    void eraseBlock();
    void update();
};


#endif //TETRIS_BOARD_H
