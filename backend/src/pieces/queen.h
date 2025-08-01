// queen.h

#ifndef QUEEN_H
#define QUEEN_H

#include "piece.h";

class Queen : public Piece {
public:
    Queen(const int8_t color, int8_t row, int8_t col) : Piece(color, row, col) {}
    std::vector<std::pair<int, int>> getMoveSet(int boardSize) override;
};

#endif