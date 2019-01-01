#include <iostream>
#include "Classes/BLOCKS.h"
#include "Classes/Game.h"


int main() {
    int loop_count = 20;
    int speed = 1;
//    int size = 1;

    Commands commands;
    Piece piece;

    // empty board with piece controled
    Board board(&piece);
    Game game(loop_count, &piece, &board);

    // main loop
    while (true) {
        // after LOOP_COUNT loops, piece
        if (game.getCounter() == loop_count) {
            if(board.confirmPieceCanDown()) piece.downOne();
            else piece.randomInit();
            game.resetCounter(); // counter = 0 ;
        }

        // gameover confirms if random piece can be inside the board
        if (game.gameover()) break;
        game.increaseCounter(speed); // counter += speed ;

        // keyboard
        if      (commands.c_Pressed())      piece.rotateRight();
        else if (commands.x_Pressed())      piece.rotateLeft();
        else if (commands.left_Pressed() )  piece.moveLeft();
        else if (commands.right_Pressed())  piece.moveRight();
        else if (commands.down_Pressed() )  piece.drop();
        // else continue; // no command inserted

        board.draw();

        // with every move, board confirms if it can delete a completed line
        // if can, it'll delete it, update static blocks positions, and draw all
        board.deleteCompletedLine();
    }

    game.showResults();
    return 0;
}