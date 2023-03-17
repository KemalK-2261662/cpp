#pragma once
#ifndef BOARD_H
#define BOARD_H
#include <string>
#include <array>
#include "Pieces.h"

class Board {
public:
    Board();                   /* maakt onze begin bord aan */
    ~Board();
    void printboard();
    void getinput();
    Colour turn{ White };
    array<array<Pieces, 8>, 8> chessboard; // using std::array
private:
    int m_x{}, m_y{};       /* current pos */
    int m_x2{}, m_y2{};     /* new pos */
    string input;
    bool MV_Pawn();
    bool MV_Bishop();
    bool MV_Knight();
    bool MV_Rook();
    bool MV_Queen();
    bool MV_King();
};
#endif // !BOARD_H

