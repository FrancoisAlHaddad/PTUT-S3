/**
 * @file   GfxObject.h
 * @author François
 * @brief  Genère un objet graphique d'une pièce de la matrice.
 * @version 4.0
 **/
#ifndef GFXOBJECT_H
#define GFXOBJECT_H

#include <QPushButton>
#include <QDebug>

#include <vector>

typedef std::pair<unsigned,unsigned> pairCoord;

#include <vector>

#include "Chessboard/Chessboard.h"

class ChessBoard;

#include "GraphicalObject/mainwindow.h"
class Chrono;
class MainWindow;

class GfxObject : public QObject
{
private:
    Q_OBJECT
    QPushButton*                button;
    bool                        Clicked;
    std::shared_ptr<Piece>      hisPiece;
    ChessBoard*                 hisBoard;
    bool                        legalMoves;

    QWidget *                   where;
    MainWindow *                hisMainWindow;

public:
    GfxObject(QWidget*where,int x,int y,std::shared_ptr<Piece> SaPiece,QString name,ChessBoard * sonBoard,MainWindow * hisMainWindow,bool color);
    QPushButton *getButton();

    bool getClicked() const;
    void setClicked(bool value);

    std::shared_ptr<Piece> getHisPiece() const;

    bool getLegalMoves() const;
    void setLegalMoves(bool value);

    void setHisPiece(const std::shared_ptr<Piece> &value);

    void refreshGraphical();

private slots:
    void Select();
};

#endif // GFXOBJECT_H
