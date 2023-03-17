#pragma once
#ifndef PIECES_H
#define PIECES_h

using namespace std;

enum Piece { Pawn, Rook, Knight, Bishop, Queen, King, Empty };
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
    void setPawn(Colour);
    void setRook(Colour);
    void setKnight(Colour);
    void setBishop(Colour);
    void setQueen(Colour);
    void setKing(Colour);
    void setPiece_Colour(Piece, Colour);
    void setX(int x);
    void setY(int y);
private:
    Piece piece;
    Colour colour;
    int m_x{}, m_y{};       /* current pos */

};

#endif // !PIECES_H
