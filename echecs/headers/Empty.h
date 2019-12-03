/**
 * @author Leo
 * @file   Empty.h
 * @brief  objet représentant une case vide, fille de la classe Piece
 * @version 1.0
 * @class Empty include "headers/Empty.h"
 */

#ifndef EMPTY_H
#define EMPTY_H

#include "Piece.h"

class Empty : public Piece
{
public:
    Empty(){}
    Empty(const pairCoord & coord);
    virtual std::vector<pairCoord> legalMoves(const std::vector<std::vector<std::shared_ptr<Piece>>> & matrix ) {}

    virtual std::vector<pairCoord> legalMoves(const std::vector<std::vector<std::shared_ptr<Piece>>> & matrix,
                                              const std::vector<std::shared_ptr<Piece>> & VPiecesOpponent) {}
};

#endif // EMPTY_H
