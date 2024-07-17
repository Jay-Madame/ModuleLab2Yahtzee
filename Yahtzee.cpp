#include <iostream>
#include "Die.h"
#include "Die.cpp"
#include "GameLogic.h"
#include "GameLogic.cpp"
#include <ctime>

int main()
{
    srand(time(0));
    Game newGame;
    char answer;
    int ans, round;
    round = 1;
    while (round != 3)
    {
        std::cout<<"Would you like to roll again? (y/n)";
        std::cin>> answer;
        if (answer == 'n')
        {
            break;
        }
        std::cout<<"How many dices are you rolling?";
        std::cin>>ans;
        round = newGame.rollDices(ans);
    }
    ans = 0;
    std::cout<<"What dice are you keeping? ";
    std::cin>> ans;
    newGame.gatherDice(ans);
    newGame.scoreChange(ans);
    newGame.displayBoxes();
    return 0;
}