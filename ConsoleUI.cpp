#include "ConsoleUI.h"
#include <iostream>
#include <string>

Console::Console() : newGame()
{
    round = 1;
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
        case 7:
            std::cout << "What dice are you scoring? ";
            std::cin >> ansForScore;
            newGame.threeOfAKind(ansForScore);
            break;
        case 8:
            std::cout << "What dice are you scoring? ";
            std::cin >> ansForScore;
            newGame.fourOfAKind(ansForScore);
            break;
        case 9:
            std::cout << "What dice are you scoring? ";
            std::cin >> ansForScore >> ans2ForScore;
            newGame.fullHouse(ansForScore, ans2ForScore);
            break;
        case 10:
            newGame.straight();
            break;
        case 11:
            newGame.straight();
            break;
        case 12:
            std::cout<<"Not yet implemented :( "<<std::endl;
            break;
        }
    }
    ansForScore = 0;
    ans2ForScore = 0;
    ans = 0;
}
void Console::startGame()
{
    gameRound = 0;
    Game newGame;
}
void Console::continueGame()
{
    gameRound++;
    Console();
}
void Console::endGame()
{
    gameRound = 0;
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