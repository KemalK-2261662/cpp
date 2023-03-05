#pragma once
#ifndef CHESSCLASSES_H
#define CHESSCLASSES_H

#include <string>
using namespace std;

enum Piece { Pawn, Empty };
enum Colour { White, Black, Nothing };

class Pieces
{
public:
    Pieces();
    Piece getPiece();
    Colour getColour();
    int getX() const;
    int getY() const;
    void setSpace(Pieces*);
    void setEmpty();
    void setPiece_Colour(Piece, Colour);
    void setX(int x);
    void setY(int y);

private:
    Piece piece;
    Colour colour;
    int m_x{}, m_y{};       /* current pos */

};

class Board {
public:
    Board();                   /* maakt onze begin bord aan */
    void printboard();
    void getinput();
    Colour turn{ White };
    Pieces chessboard[8][8];     /* we gebruiken static omdat het bord 'de kern' waarde is van het spel */

private:
    int m_x{}, m_y{};       /* current pos */
    int m_x2{}, m_y2{};     /* new pos */
    string input;
    bool MV_Pawn();
    Piece Curr_Piece{ Empty };
    /*                      -- later it will be needed --
        bool MV_Bishop();
        bool MV_Knight();
        bool MV_Rook();
        bool MV_Queen();
        bool MV_King();
    */
};

class game {
public:
    Board chessboard;
    Colour getTurn();
    void start_screen();
    void printturn();                  /* added */
    bool statusgame();                /* getter for status game */
    void changeTurn();
    void intro();

private:
    bool m_play = true;
};

#endif