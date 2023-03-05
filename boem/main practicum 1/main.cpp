#include <iostream>
#include "ChessBoard.h"

int main() {
    bool play = true;

    Board chessboard;
    Pieces p;

    while (play)
    {
        chessboard.print();
        switch (chessboard.getTurn())
        {
        case 0: cout << "White's turn"<<endl;
        case 1: cout << "Black's turn"<<endl;
        default:
            break;
        }
        cout << "Move(x-y): ";
        chessboard.changeTurn();
        cout << "Your move ? in XYXY format" << endl;
        
    }
    return 0;
}
