#include <iostream>
#include <vector>
#include <string>
#include "ChessBoard.h"
using namespace std;

Pieces::Pieces() 
{
    piece = Empty;
    colour = Nothing;
}

Board::Board()             /* constructor om de begin situatie van het bord aan te maken */
{
    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x <8; x++)
        {
            chessboard[i][x].setPiece_Colour(Pawn, White);
            chessboard[7-i][x].setPiece_Colour(Pawn, Black);

        }

    }
    for (int i = 2; i < 6; i++)
    {
        for (int j = 0; j < 8; j++)
            chessboard[i][j].setPiece_Colour(Empty, Nothing);

    }
    
          for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
            {
                chessboard[i][j].setX(i);
                chessboard[i][j].setY(j);
            }
    
}

void Board::print() 
{             
    using namespace std;
    cout << "\tCHESS PROTOTYPE" << endl;
    cout << "    A  B  C  D  E  F  G  H \n"
        << "   ------------------------\n";
    for (int i = 0; i < 8; i++)
    {
        cout << 8 - i << " ";
        for (int j = 0; j < 8; j++)
        {
            Piece p = chessboard[i][j].getPiece();
            Colour c = chessboard[i][j].getColour();

            switch (p)
            {
            case Pawn: (c == White) ? cout << " P2" : cout << " P1";
                break;
            case Empty: cout << "  ";
                break;
            default: cout << "XX";
                break;
            }

        }
        cout << endl;
    }

}

int Pieces::getX() const
{
    switch (m_x)
    {
    case 'A':
        return 1;
    case 'B':
        return 2;
    case 'C':
        return 3;
    case 'D':
        return 4;
    case 'E':
        return 5;
    case 'F':
        return 6;
    case 'G':
        return 7;
    case 'H':
        return 8;
    default:
        break;
    }
    return m_x;
}

int Pieces::getY() const
{
    return m_y;
}

Piece Pieces::getPiece()
{
    return piece;
}

Colour Pieces::getColour()
{
    return colour;
}

void Pieces::setSpace(Pieces* space)
{
    piece = space->piece;
    colour = space->colour;
}

void Pieces::setEmpty()
{
    piece = Empty;
    colour = Nothing;
}

void Pieces::setPiece_Colour(Piece p, Colour c)
{
    piece = p;
    colour = c;
}

void Pieces::setX(int x)
{
    m_x = x;
}

void Pieces::setY(int y)
{
    m_y = y;
}

int Board::getTurn()
{
    return turn;
}
void Board::changeTurn()
{
    if (turn == White)
        turn = Black;
    else
        turn = White;
}