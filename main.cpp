#include <iostream>
#include "Pieces.h"

#define LOOP_COUNT 100
int main() {

    Commands commands;
    Piece piece;

    // empty board with piece controled
    Board board(&piece);
    Game game(LOOP_COUNT, &piece, &board);

    // main loop
    while (true) {
        if (game.getCounter() == LOOP_COUNT) {
            piece.randomInit();
            game.updateCounter(); // counter++ ;
        }

        // gameover confirms if random piece can be inside the board
        if (game.gameover()) break;

        // keyboard
        if      (commands.c_Pressed())      piece.rotateRight();
        else if (commands.x_Pressed())      piece.rotateLeft();
        else if (commands.left_Pressed() )  piece.moveLeft();
        else if (commands.right_Pressed())  piece.moveRight();
        else if (commands.down_Pressed() )  piece.drop();

        board.draw();

        // with every move, board confirms if it can delete a completed line
        // if can, it'll delete it, update static blocks positions, and draw all
        board.deleteCompletedLine();
    }

    game.showResults();
    return 0;
}