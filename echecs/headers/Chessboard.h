/**
 * @file   ChessBoard.h
 * @author Leo, Laurent
 * @brief  classe echiquier avec un vecteur de vecteur de Piece, un matrice, qui represente l'echiquier
 * @class  Echiquier Echiquier.h "include Echiquier.h"
 * @version 1.0
 **/

#ifndef ECHIQUIER_H
#define ECHIQUIER_H

#include <iostream>
#include <vector>
#include <memory>
#include "Piece.h"

typedef std::vector<std::vector<std::shared_ptr<Piece>>> Matrix;
//typedef std::vector<Piece *> VPieces;

class ChessBoard {
private:
    Matrix myChessBoard;


public:
     ChessBoard();

     /**
      * @brief affiche la matrice avec les pieces selon leurs coordonnées
      */
     void show() const;


     //getter
     Matrix getChessboard() const;

};//Echiquier


#endif // ECHIQUIER_H
