// knight.h

#ifndef KNIGHT_H
#define KNIGHT_H

#include "piece.h";

class Knight : public Piece {
public:
    Knight(const int8_t color, int8_t row, int8_t col) : Piece(color, row, col) {}
    std::vector<std::pair<int, int>> getMoveSet(int boardSize) override;
};

#endif