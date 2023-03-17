#include <iostream>
#include <math.h>
#include "Board.h"
using namespace std;

Board::~Board()
{
    cout << "in destructor";
    if (!chessboard.empty()) {
        cerr << "chessboard isn't cleaned";
    }

}

Board::Board()             //constructor om de begin situatie van het bord aan te maken
{
    for (int i = 1; i < 2; i++) //setting the pawns
    {
        for (int x = 0; x < 8; x++)
        {
            chessboard[x][i].setPiece_Colour(Pawn, White);
            chessboard[x][7 - i].setPiece_Colour(Pawn, Black);
        }
    }
    //setting peices for white
    chessboard[0][0].setPiece_Colour(Rook, White);
    chessboard[1][0].setPiece_Colour(Knight, White);
    chessboard[2][0].setPiece_Colour(Bishop, White);
    chessboard[3][0].setPiece_Colour(Queen, White);
    chessboard[4][0].setPiece_Colour(King, White);
    chessboard[5][0].setPiece_Colour(Bishop, White);
    chessboard[6][0].setPiece_Colour(Knight, White);
    chessboard[7][0].setPiece_Colour(Rook, White);
    //setting pieces for black
    chessboard[0][7].setPiece_Colour(Rook, Black);
    chessboard[1][7].setPiece_Colour(Knight, Black);
    chessboard[2][7].setPiece_Colour(Bishop, Black);
    chessboard[3][7].setPiece_Colour(Queen, Black);
    chessboard[4][7].setPiece_Colour(King, Black);
    chessboard[5][7].setPiece_Colour(Bishop, Black);
    chessboard[6][7].setPiece_Colour(Knight, Black);
    chessboard[7][7].setPiece_Colour(Rook, Black);

    for (int i = 2; i < 6; i++) // setting the empty spaces
    {
        for (int j = 0; j < 8; j++)
            chessboard[j][i].setPiece_Colour(Empty, Nothing);

    }
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
        {
            chessboard[j][i].setX(i);
            chessboard[j][i].setY(j);
        }
}
void Board::printboard()
{
    cout << "        A    B    C    D    E    F    G    H \n"
        << "       ---------------------------------------\n";
    for (int i = 0; i < 8; i++)
    {
        cout << "   " << 8 - i << " |";
        for (int j = 0; j < 8; j++)
        {
            switch (chessboard[j][7 - i].getPiece())
            {
            case Pawn: (chessboard[j][7 - i].getColour() == White) ? cout << " Pa1 " : cout << " Pa2 ";
                break;
            case Rook: (chessboard[j][7 - i].getColour() == White) ? cout << " Ro1 " : cout << " Ro2 ";
                break;
            case Knight: (chessboard[j][7 - i].getColour() == White) ? cout << " Kn1 " : cout << " Kn2 ";
                break;
            case Bishop: (chessboard[j][7 - i].getColour() == White) ? cout << " Bi1 " : cout << " Bi2 ";
                break;
            case Queen: (chessboard[j][7 - i].getColour() == White) ? cout << " Qu1 " : cout << " Qu2 ";
                break;
            case King: (chessboard[j][7 - i].getColour() == White) ? cout << " Ki1 " : cout << " Ki2 ";
                break;
            case Empty: cout << "     ";
                break;
            default: cout << "XX";
                break;
            }
        }
        cout << endl;
    }
}
void Board::getinput() {
    cin >> input;
    bool validinput = true;

    string validchar = "ABCDEFGHabcdefgh";    //valid x-as 
    string validint = "12345678";

    while (validinput)
    {
        for (int i = 0; i < 4; i++)
        {
            if (validchar.find(input[i]) == string::npos && (i == 0 || i == 2))
            {
                validinput = false;
                /* this is a immitation of error */
            }
            else if (validint.find(input[i]) == string::npos && (i == 1 || i == 3))
            {
                validinput = false;
                /* this is a immitation of error */
            }
        }
        if (validinput) {
            for (int i = 0; i < 4; i++)         /* xyxy cords = 4 */
            {
                if (i == 0 || i == 2) {
                    switch (toupper(input[i]))    //letter sensitive
                    {
                    case 'A':
                        (i == 0 ? m_x = 0 : m_x2 = 0);
                        break;
                    case 'B':
                        (i == 0 ? m_x = 1 : m_x2 = 1);
                        break;
                    case 'C':
                        (i == 0 ? m_x = 2 : m_x2 = 2);
                        break;
                    case 'D':
                        (i == 0 ? m_x = 3 : m_x2 = 3);
                        break;
                    case 'E':
                        (i == 0 ? m_x = 4 : m_x2 = 4);
                        break;
                    case 'F':
                        (i == 0 ? m_x = 5 : m_x2 = 5);
                        break;
                    case 'G':
                        (i == 0 ? m_x = 6 : m_x2 = 6);
                        break;
                    case 'H':
                        (i == 0 ? m_x = 7 : m_x2 = 7);
                        break;
                    default:
                        cerr << "Invalid input" << endl;
                        break;
                    }
                }
                if (i == 1 || i == 3) {
                    switch (input[i])    //letter sensitive
                    {
                    case '1':
                        (i == 1 ? m_y = 0 : m_y2 = 0);
                        break;
                    case '2':
                        (i == 1 ? m_y = 1 : m_y2 = 1);
                        break;
                    case '3':
                        (i == 1 ? m_y = 2 : m_y2 = 2);
                        break;
                    case '4':
                        (i == 1 ? m_y = 3 : m_y2 = 3);
                        break;
                    case '5':
                        (i == 1 ? m_y = 4 : m_y2 = 4);
                        break;
                    case '6':
                        (i == 1 ? m_y = 5 : m_y2 = 5);
                        break;
                    case '7':
                        (i == 1 ? m_y = 6 : m_y2 = 6);
                        break;
                    case '8':
                        (i == 1 ? m_y = 7 : m_y2 = 7);
                        break;
                    default:
                        cerr << "Invalid input" << endl;
                        break;
                    }
                }
            }
        }
        if (validinput)        // eindelijk een correct input ma move je wel iets of movie je niks gij sluwwe vos
        {
            if (chessboard[m_x][m_y].getColour() != turn && chessboard[m_x][m_y].getColour()!= Nothing)
            {
                cerr << "Ayyoo no cheating don't move " << (turn != White ? "White" : "Black") << "'s Piece" << endl;
                validinput = false;
            }
            switch (chessboard[m_x][m_y].getPiece())
            {
            case Pawn: validinput = MV_Pawn();
                break;
            case Rook: validinput = MV_Rook();
                break;
            case Knight: validinput = MV_Knight();
                break;
            case Bishop: validinput = MV_Bishop();
                break;
            case Queen: validinput = MV_Queen();
                break;
            case King: validinput = MV_King();
                break;
            case Empty: cerr << "I think you want to move air? But that isn't possible XD\n";
                validinput = false;
                break;
            }
        }
        if (!validinput)
        {
            cerr << "Give your new correct move: ";
            cin >> input;
            validinput = true; /* test new input */
        }
        else
        {
            validinput = false;
        }
    }
}
bool Board::MV_Pawn()
{
    if (m_x == m_x2 && m_y == m_y2)         /*schaakstuk niet bewegen*/
    {
        return false;
    }
    if ((m_y2 - m_y < 0 && turn == White) || (m_y2 - m_y > 0 && turn == Black)) //niet terug
    {
        return false;
    }
    if (m_x == m_x2 && abs(m_y2 - m_y) < 3) /* niet eten */
    {
        for (int i = 1; i <= abs(m_y2 - m_y); i++)              /* valid move? */
        {
            if (chessboard[m_x][m_y].getColour() == White)
            {
                if ((chessboard[m_x][m_y + i].getPiece() != Empty || chessboard[m_x][m_y + i].getColour() != Nothing))
                {
                    return false;
                }
            }
            else
            {
                if ((chessboard[m_x][m_y - i].getPiece() != Empty || chessboard[m_x][m_y - i].getColour() != Nothing)) //geldig move zwart
                {
                    return false;
                }
            }
        }
        /* make move */
        if ((m_y == 1) || (m_y == 6))
        {
            chessboard[m_x][m_y].setEmpty();
            chessboard[m_x2][m_y2].setPawn(turn);
        }
        else
            if (abs(m_y2 - m_y) == 1)
            {
                chessboard[m_x][m_y].setEmpty();
                chessboard[m_x2][m_y2].setPawn(turn);
            }
            else
            {
                return false;
            }
    }
    else /* eten */
    {
        if (abs(m_x2 - m_x) == 1 && abs(m_y2 - m_y) == 1)
        {
            if (chessboard[m_x2][m_y2].getColour() != turn && chessboard[m_x2][m_y2].getPiece() != Empty) {
                chessboard[m_x][m_y].setEmpty();
                chessboard[m_x2][m_y2].setPawn(turn);
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
}
bool Board::MV_Rook()
{
    int h_afstand = abs(m_x2 - m_x),v_afstand = abs(m_y2 - m_y);
    if (m_x == m_x2 && m_y == m_y2)         /*schaakstuk niet bewegen*/
    {
        return false;
    }
    if (m_x != m_x2 && m_y != m_y2)         /*niet schuin*/
    {
        return false;
    }
    if (m_x == m_x2) // verticaal
    {
        int y_stappen = (m_y2 - m_y) / v_afstand;
        for (int i = 1; i < m_y2 ; i++)
        {
            if (chessboard[m_x][m_y + (y_stappen * i)].getColour() != Nothing)
            {
                return false;
            }
        }
        if (chessboard[m_x2][m_y2].getColour() != turn)
        {
            chessboard[m_x2][m_y2].setRook(turn);
            chessboard[m_x][m_y].setEmpty();
            return true;
        }
    }
    if (m_y == m_y2)
    {
        int x_stappen = (m_x2 - m_x) / h_afstand;
        for (int i = 1; i < m_x2; i++)
        {
            if (chessboard[m_x + (x_stappen * i)][m_y].getColour() != Nothing)
            {
                return false;
            }
        }
        if (chessboard[m_x2][m_y2].getColour() != turn)
        {
            chessboard[m_x2][m_y2].setRook(turn);
            chessboard[m_x][m_y].setEmpty();
            return true;
        }
    }
    else
    {
        return false;
    }
}
bool Board::MV_Knight()
{
    int h_afstand = abs(m_x2 - m_x),v_afstand = abs(m_y2 - m_y);
    if (m_x == m_x2 && m_y == m_y2)         /*schaakstuk niet bewegen*/
    {
        return false;
    }
    if (((h_afstand == 2 && v_afstand == 1) || (h_afstand == 1 && v_afstand == 2)) && chessboard[m_x2][m_y2].getColour() != turn)
    {
        chessboard[m_x2][m_y2].setKnight(turn);
        chessboard[m_x][m_y].setEmpty();
        return true;
    }
    else
    {
        return false;
    }
}
bool Board::MV_Bishop()
{
    int h_afstand = abs(m_x2 - m_x), v_afstand = abs(m_y2 - m_y);
    if (m_x == m_x2 && m_y == m_y2)         /*schaakstuk niet bewegen*/
    {
        return false;
    }
    if (h_afstand == v_afstand)
    {
        int x_stappen = (m_x2 - m_x) / h_afstand, y_stappen = (m_y2 - m_y) / v_afstand;
        for (int i = 1; i < (h_afstand | v_afstand); i++)
        {
            if (chessboard[m_x + (x_stappen * i)][m_y + (y_stappen * i)].getColour() != Nothing)
            {
                    return false;
            }
        }
        if (chessboard[m_x2][m_y2].getColour() != turn)
        {
            chessboard[m_x2][m_y2].setBishop(turn);
            chessboard[m_x][m_y].setEmpty();
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
bool Board::MV_Queen()
{
    if (m_x == m_x2 && m_y == m_y2)         /*schaakstuk niet bewegen*/
    {
        return false;
    }
    if (m_x != m_x2 || m_y != m_y2)
    {
        int h_afstand = abs(m_x2 - m_x), v_afstand = abs(m_y2 - m_y);
        int x_stappen = (m_x2 - m_x) / h_afstand, y_stappen = (m_y2 - m_y) / v_afstand;
        if (m_x == m_x2) // verticaal
        {
            for (int i = 1; i < m_y2; i++)
            {
                if (chessboard[m_x][m_y + (y_stappen * i)].getColour() != Nothing)
                {
                    return false;
                }
            }
            if (chessboard[m_x2][m_y2].getColour() != turn)
            {
                chessboard[m_x2][m_y2].setQueen(turn);
                chessboard[m_x][m_y].setEmpty();
                return true;
            }
        }
        if (m_y == m_y2)
        {
            for (int i = 1; i < m_x2; i++)
            {
                if (chessboard[m_x + (x_stappen * i)][m_y].getColour() != Nothing)
                {
                    return false;
                }
            }
            if (chessboard[m_x2][m_y2].getColour() != turn)
            {
                chessboard[m_x2][m_y2].setQueen(turn);
                chessboard[m_x][m_y].setEmpty();
                return true;
            }
        }
        else
        {
            if (h_afstand == v_afstand)
            {
                int x_stappen = (m_x2 - m_x) / h_afstand, y_stappen = (m_y2 - m_y) / v_afstand;
                for (int i = 1; i < (h_afstand | v_afstand); i++)
                {
                    if (chessboard[m_x + (x_stappen * i)][m_y + (y_stappen * i)].getColour() != Nothing)
                    {
                        return false;
                    }
                }
                if (chessboard[m_x2][m_y2].getColour() != turn)
                {
                    chessboard[m_x2][m_y2].setQueen(turn);
                    chessboard[m_x][m_y].setEmpty();
                    return true;
                }
            }
            else
            {
                return false;
            }
        }
    }
    else
    {
        return false;
    }
}
bool Board::MV_King()
{
    if (m_x == m_x2 && m_y == m_y2)         /*schaakstuk niet bewegen*/
    {
        return false;
    }
    int h_afstand = abs(m_x2 - m_x), v_afstand = abs(m_y2 - m_y);
    if ((h_afstand == 1 || v_afstand == 1) && chessboard[m_x2][m_y2].getColour() != turn)
    {
        chessboard[m_x2][m_y2].setKing(turn);
        chessboard[m_x][m_y].setEmpty();
        return true;
    }
    else
    {
        return false;
    }
}