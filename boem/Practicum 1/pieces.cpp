#include <iostream>
#include "pieces.h"

Pieces::Pieces(int x, int y) : m_x{x}, m_y{y}
{

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
