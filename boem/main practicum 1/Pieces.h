#pragma once
#ifndef PIECES_H
#define PIECES_H
#include <iostream>
using namespace std;

enum Piece { Pawn, Empty };
enum Colour { White, Black, Nothing };

class Pieces
{
public:
    Pieces(int x, int y);
    int getX() const;
    int getY() const;
    Piece getPiece();
    Colour getColour();
    void setSpace(Pieces*);
    void setEmpty();
    void setPiece_Colour(Piece, Colour);
    void setX(int x);
    void setY(int y);


private:
    Piece piece{ Empty };
    Colour colour{ Nothing };
    int m_x, m_y;
};

#endif // !PIECES_H