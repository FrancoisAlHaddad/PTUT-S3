#ifndef PIECE_H
#define PIECE_H

#include <iomanip>

typedef std::pair<unsigned,unsigned> pairCoord;
/**
 * @author Laurent
 * @brief classe abstraite qui definit les pieces avec leur couleur postion et la fonction de mouvement 
 * @class Echiquier Echiquier.h "include Echiquier.h"
 */
class Piece
{
private:
    enum myColor {blanc, noir};     
public:
    virtual pairCoord move(const Piece & piece, const unsigned & x, const unsigned & y);
    virtual ~Piece();
};

#endif // PIECE_H
