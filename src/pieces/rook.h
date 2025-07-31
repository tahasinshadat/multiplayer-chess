// rook.h

#ifndef ROOK_H
#define ROOK_H

#include "piece.h";

class Rook : public Piece {
public:
    Rook(const int8_t color, int8_t row, int8_t col) : Piece(color, row, col) {}
    std::vector<int> getMoveSet() override;    
};

#endif