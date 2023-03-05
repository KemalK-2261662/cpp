#pragma once

#include <string>
using namespace std;

enum Piece { Pawn, Empty };
enum Colour { White, Black, Nothing };

class Pieces
{
private:
    Piece piece;
    Colour colour;
    int m_x{}, m_y{};
public:
    Pieces();
    int getX() const;
    int getY() const;
    Piece getPiece();
    Colour getColour();
    void setSpace(Pieces*);
    void setEmpty();
    void setPiece_Colour(Piece, Colour);
    void setX(int x);
    void setY(int y);
};


class Board {
private:
    Pieces chessboard[8][8];     /* we gebruiken static omdat het bord 'de kern' waarde is van het spel */
    Colour turn = White;
public:
    Board();                   /* maakt onze begin bord aan */
    void print(); 
    int getTurn();
    void changeTurn();
};


