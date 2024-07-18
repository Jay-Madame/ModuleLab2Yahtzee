#include "ConsoleUI.h"
#include <iostream>
#include <string>

Console::Console() : newGame()
{
    round = 1;
}

void Console::playingYahtzee()
{
    while (round != 3)
    {
        std::cout << "Would you like to roll again? (y/n) - ";
        std::cin >> answer;
        if (answer == 'n')
        {
            break;
        }
        std::cout << "How many dices are you rolling? - ";
        std::cin >> ans;
        round = newGame.rollDices(ans);
    }
    ans = 0;
}

void Console::changeABox()
{
    newGame.displayBoxes();
    std::cout << "What dice are you wanting to score in (enter the line): ";
    std::cin >> ans;
    if (ans < 7)
    {
        std::cout << "What dice are you scoring? ";
        std::cin >> ansForScore;
    }
    else
    {
        switch (ans)
        {
        default:
            std::cout << "Not yet implemented :( " << std::endl;
            break;
        }
    }
    ansForScore = 0;
    ans2ForScore = 0;
    ans = 0;
}
void Console::continueGame()
{
    gameRound++;
    Console();
}
void Console::endGame()
{
    gameStats();
}
void Console::gameStats()
{
    std::cout << "Score is: "
              << std::to_string(newGame.getScore())
              << std::endl
              << std::endl;
    newGame.displayBoxes();
}

int Console::getGameRound()
{
    return gameRound;
}

/*{
    std::cout << ""
              << "     ____"
              << "   /\\' .\\      ____"
              << "  /: \\____\\  / .  /\\"
              << " \\'  / . /   /____/..\\"
              << "  \\/____/   \\'  '\\  /"
              << "              \\'__'\\/";
}*/