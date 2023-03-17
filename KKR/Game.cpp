#include <iostream>
#include "Game.h"
#include <vector>
#include <windows.h>


void Game::Start() {
    intro();
    while (statusgame())
    {
        printturn();
        chessboard.getinput();
        changeTurn();
    }
}

void Game::intro()
{
    string s;
    vector<string> animation =
    {
        "  _____  _    _ ______  _____ _____    \n",
        " / ____ | |  | |  ____|/ ____/ ____|   \n",
        " | |    | |__| | |__  | (___| (___     \n",
        " | |    |  __  |  __|  \\___  \\___ \\   \n",
        " | |____| |  | | |____ ____) |___) |   \n",
        "  \\_____|_|  |_|______|_____/_____/     \n"
    };
    int len = animation[0].length() - 1;
    for (int i = 0; i <= len; i++)
    {
        system("cls");
        cout << animation[0].substr(len - i)
            << animation[1].substr(len - i)
            << animation[2].substr(len - i)
            << animation[3].substr(len - i)
            << animation[4].substr(len - i)
            << animation[5].substr(len - i);
        Sleep(20);
    }
    cout << "            ENTER TO START\n                   ";
    cin >> s;
    for (int i = 0; i <= len; i++)
    {
        system("cls");
        cout << animation[0].substr(i)
            << animation[1].substr(i)
            << animation[2].substr(i)
            << animation[3].substr(i)
            << animation[4].substr(i)
            << animation[5].substr(i);
        Sleep(10);
    }
}
void Game::printturn()

{
    system("cls");
    cout << "    _____ _    _ ______  _____ _____ \n   / ____| |  | |  ____|/ ____/ ____| \n  | |    | |__| | |__  | (___| (___  \n  | |    |  __  |  __|  \\___  \\___ \\ \n  | |____| |  | | |____ ____) |___) | \n   \\_____|_|  |_|______|_____/_____/ \n" << endl;
    switch (chessboard.turn)           /* based on turn a special output */
    {
    case White:
        cout
            << "            **************"
            << "\n             White's turn\n"
            << "            **************\n" << endl;
        break;
    case Black:
        cout
            << "            **************"
            << "\n             Black's turn\n"
            << "            **************\n" << endl;
        break;
    default:
        break;
    }
    chessboard.printboard();             /* printing the board */
    cout << "\n   * Your move ? in XYXY format\n\n    ";
}

bool Game::statusgame()
{
    return m_play;
}
Colour Game::getTurn()
{
    return chessboard.turn;
}
void Game::changeTurn()
{
    if (chessboard.turn == White)
        chessboard.turn = Black;
    else
        chessboard.turn = White;
}
void Game::checkwinner()
{
    for (int i = 0; i < 8; i++)
    {
        if (chessboard.chessboard[i][0].getColour() == Black || chessboard.chessboard[i][7].getColour() == White)
        {
            m_play = false;
            cout << "The winner is " << (getTurn() == White ? "White" : "Black") << endl;
        }
    }
}

void Game::endanimation()
{
    vector<string> White_animation =
    {
        "                 _       _                                          \n",
        "                ( )    _( )_                                        \n",
        "     _    _    _| |__ (_)  _)  ___         _   _   _   _    ___     \n",
        "    ( )  ( )  ( )  _  \\ | |  / __ \\       ( ) ( ) ( )/ _ \\/  _  \\   \n",
        "    | \\_ / \\_/  | | | | | |_(  ___/       | \\_/ \\_/ | (_) ) ( ) |   \n",
        "     \\__ / \\___/(_) (_)_)\\__)\\____)        \\__/\\___/ \\___/(_) (_)    \n"
    };
    vector<string> Black_animation =
    {
        "    _      _              _                                       \n",
        "   ( )    (_)            ( )                                      \n",
        "   | |_   | |   _ _   ___| |/ )          _   _   _   _    ___     \n",
        "   |  _ \\ | | / _  )/ ___)   (          ( ) ( ) ( )/ _ \\/  _  \\   \n",
        "   | |_) )| |( (_| | (___| |\\ \\         | \\_/ \\_/ | (_) ) ( ) |   \n",
        "   (_ __/(___)\\__ _)\\____)_) (_)         \\__/\\___/  \\___/(_) (_)   \n",
    };
    if (getTurn() == White)
    {
        int len = White_animation[0].length() - 1;
        for (int i = 0; i <= len; i++)
        {
            system("cls");
            cout << White_animation[0].substr(len - i)
                << White_animation[1].substr(len - i)
                << White_animation[2].substr(len - i)
                << White_animation[3].substr(len - i)
                << White_animation[4].substr(len - i)
                << White_animation[5].substr(len - i);
            Sleep(30);

        }
    }
    else
    {
        int len = Black_animation[0].length() - 1;
        for (int i = 0; i <= len; i++)
        {
            system("cls");
            cout << Black_animation[0].substr(len - i)
                << Black_animation[1].substr(len - i)
                << Black_animation[2].substr(len - i)
                << Black_animation[3].substr(len - i)
                << Black_animation[4].substr(len - i)
                << Black_animation[5].substr(len - i);
            Sleep(30);

        }
    }
}

