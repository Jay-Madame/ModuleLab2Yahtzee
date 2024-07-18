#include <iostream>
#include "Die.h"
#include "Die.cpp"
#include "GameLogic.h"
#include "GameLogic.cpp"
#include <ctime>
#include "ConsoleUI.h"
#include "ConsoleUI.cpp"

int main()
{
    srand(time(0));
    int gameLength;
    std::string ans;
    Console newGame;
    gameLength = newGame.getGameRound();
    while (gameLength < 14)
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