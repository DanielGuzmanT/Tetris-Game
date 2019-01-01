//
// Created by jhair on 31/12/18.
//

#include "Game.h"

// CONSTRUCTOR
Game::Game(int counter, Piece *piece, Board *board)
: counter(counter), piece(piece), board(board) {
}

int Game::getCounter() const {
    return counter;
}

void Game::resetCounter() {
    this->counter = 0;
}

void Game::increaseCounter(int velocity) {
    this->counter += velocity;
}

bool Game::gameover() {
    return false;
}

