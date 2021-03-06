/**
 * @file   initThread.h
 * @author François
 * @brief  Initialise un Thread avec un Chrono graphiquement
 * @version 1.3
 **/

#ifndef INITTHREAD_H
#define INITTHREAD_H

#include <QThread>

#include <Chessboard/Chessboard.h>

class Chrono;

class initThread : public QThread
{
    Q_OBJECT
public:
    initThread(ChessBoard * hisBoard,Chrono * hisChrono/*QObject * parent*/);
    void run();
private:
    ChessBoard * hisBoard;
    Chrono * hisChrono;
public slots:
signals:
    void sendSignal(QString timeToSend);
};

#endif // INITTHREAD_H
