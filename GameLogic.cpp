#pragma once
#include "Die.h"
#include "GameLogic.h"

Game::Game() : bonus(35)
{
    for (int i = 0; i < 6; i++)
    {
        std::cout << "Die " << (i + 1) << ":";
        std::cout << dices[i].dieToString(dices[i].getFaceValue()) << std::endl
                  << std::endl;
    }
}

Game::Game(int value) : bonus(value)
{
    for (int i = 0; i < 6; i++)
    {
        std::cout << "Die " << (i + 1) << ":";
        std::cout << dices[i].dieToString(dices[i].getFaceValue()) << std::endl
                  << std::endl;
    }
}
int Game::rollDices()
{
    rounds = 1;
    for (int i = 0; i < 6; i++)
    {
        dices[i].roll();
        std::cout << "Die " << (i + 1) << ":";
        std::cout << dices[i].dieToString(dices[i].getFaceValue()) << std::endl
                  << std::endl;
    }
    return rounds;
}
int Game::rollDices(int dicesToRoll)
{
    rounds++;
    std::cout << "Which dices are you rolling? \n";
    for (int i = 0; i < dicesToRoll; i++)
    {
        std::cin >> diceRoll;
        diceRoll--;
        dices[diceRoll].roll();
        diceRoll = 0;
    }
    for (int i = 0; i < 6; i++)
    {
        std::cout << "Die " << (i + 1) << ":";
        std::cout << dices[i].dieToString(dices[i].getFaceValue()) << std::endl
                  << std::endl;
    }
    return rounds;
}
int Game::whichBox(int box)
{

}
int Game::scoreChange(int value)
{
}