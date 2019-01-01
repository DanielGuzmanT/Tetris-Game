//
// Created by jhair on 31/12/18.
//

#ifndef TETRIS_PIECE_H
#define TETRIS_PIECE_H

class Board;
enum POSITION {START_X = 1, START_Y = 0};

class Piece {
private:
    int x, y;
    int kind, rott;

public:
    Piece();
    void randomInit();
    void move(int move_x, int move_y);
    friend class Board;
};


#endif //TETRIS_PIECE_H
