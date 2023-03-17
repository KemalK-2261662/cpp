#pragma once
#ifndef GAME_H
#define GAME_H
#include "Board.h"

class Game {
public:
    Colour getTurn();
    void Start();
    void printturn();                  /* added */
    bool statusgame();                /* getter for status game */
    void changeTurn();
    void intro();
    void checkwinner();
    void endanimation();
private:
    bool m_play = true;
    Board chessboard;
};

#endif // !GAME_H

