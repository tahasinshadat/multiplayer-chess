// board.h
// Description:

#ifndef BOARD_H
#define BOARD_H

// Imports:
#include <iostream>

class Board {
public:
    Board(int8_t rows, int8_t cols) : row(row), col(col) {}
    virtual ~Board() = 0;

private:
    int8_t row;
    int8_t col;

};

#endif