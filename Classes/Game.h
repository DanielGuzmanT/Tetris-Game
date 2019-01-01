//
// Created by jhair on 31/12/18.
//

#ifndef TETRIS_GAME_H
#define TETRIS_GAME_H

#include "Board.h"

class Game {
private:
    int counter;
    Piece* piece;
    Board* board;
public:
    Game(int counter, Piece *piece, Board *board);
    int getCounter() const;
    void resetCounter();
    void increaseCounter(int velocity=1);
    bool gameover();
};


#endif //TETRIS_GAME_H
