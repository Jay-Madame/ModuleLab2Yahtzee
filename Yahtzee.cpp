#include <iostream>
#include <ctime>
#include "ConsoleUI.h"
#include "ConsoleUI.cpp"
#include "GameLogic.h"
#include "GameLogic.cpp"
#include "Die.h"
#include "Die.cpp"

int main()
{
    srand(time(0));
    int gameLength;
    std::string ans;
    Console newGame;
    newGame.playingYahtzee();
    gameLength = newGame.getGameRound();
    while (gameLength < 7)
    {
        newGame.changeABox();
        std::cout << "Would you like to continue? (y/n) ";
        std::cin >> ans;
        if ((ans == "y") || (ans == "Y"))
        {
            newGame.continueGame();
        }
        else
            break;
        gameLength = newGame.getGameRound();
    }
    newGame.endGame();
    return 0;
}