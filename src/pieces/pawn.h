// pawn.h

#ifndef PAWN_H
#define PAWN_H
#include "piece.h";

class Pawn : public Piece {
public:
    Pawn(const int8_t color, int8_t row, int8_t col) : Piece(color, row, col) {}
    std::vector<int> Pawn::getMoveSet() override;
};

#endif