// king.h

#ifndef KING_H
#define KING_H

#include "piece.h";

class King : public Piece {
public:
    King(const int8_t color, int8_t row, int8_t col) : Piece(color, row, col) {}
    
    std::vector<int> King::getMoveSet() override;
};

#endif