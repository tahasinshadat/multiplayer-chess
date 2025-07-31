// piece.h
// Description:

#ifndef PIECE_H
#define PIECE_H

// Imports:
#include <iostream>
#include <vector>

class Piece {
public:
    Piece(const int8_t color, int8_t row, int8_t col) : color(color), row(row), col(col) {}
    virtual std::vector<int> getMoveSet() = 0; // references current position, constantly branches out of it
    virtual ~Piece() = default;

private:
    const int8_t color;
    int8_t row;
    int8_t col;

protected:
    void move(int8_t new_row, int8_t new_col) {
        this->row = new_row;
        this->col = new_col;
    }
};

#endif