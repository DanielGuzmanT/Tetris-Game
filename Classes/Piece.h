//
// Created by jhair on 31/12/18.
//

#ifndef TETRIS_PIECE_H
#define TETRIS_PIECE_H

class Piece {
private:
    int x, y;
    int kind, rott;

public:
    Piece();
    void randomInit();
    void downOne();
};


#endif //TETRIS_PIECE_H
