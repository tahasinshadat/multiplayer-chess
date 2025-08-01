// bishop.h

#ifndef BISHOP_H
#define BISHOP_H

#include "piece.h";

class Bishop : public Piece {
public:
    Bishop(const int8_t color, int8_t row, int8_t col) : Piece(color, row, col) {}
    
    std::vector<std::pair<int, int>> getMoveSet(int boardSize) override;    
};

#endif