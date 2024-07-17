#pragma once
#include "Die.h"
#include "GameLogic.h"

Game::Game() : bonus(35)
{
    dices[0].printRoll();
    std::cout << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Die " << (i + 1) << ":";
        std::cout << dices[i].dieToString(dices[i].getFaceValue()) << std::endl
                  << std::endl;
    }
    boxes = new int[13];
    std::fill_n(boxes, 13, 0);
}

Game::Game(int value) : bonus(value)
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Die " << (i + 1) << ":";
        std::cout << dices[i].dieToString(dices[i].getFaceValue()) << std::endl
                  << std::endl;
    }
    boxes = new int[13];
    std::fill_n(boxes, 13, 0);
}
int Game::rollDices()
{
    dices[0].printRoll();
    std::cout << std::endl;
    rounds = 1;
    for (int i = 0; i < 5; i++)
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
    dices[0].printRoll();
    std::cout << std::endl;
    rounds++;
    std::cout << "Which dices are you rolling? \n";
    for (int i = 0; i < dicesToRoll; i++)
    {
        std::cin >> diceRoll;
        diceRoll--;
        dices[diceRoll].roll();
        diceRoll = 0;
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Die " << (i + 1) << ":";
        std::cout << dices[i].dieToString(dices[i].getFaceValue()) << std::endl
                  << std::endl;
    }
    return rounds;
}

int Game::scoreChange(int box)
{
    tempScore--;
    *((box - 1) + boxes) = tempScore;
    score += tempScore;
    tempScore = 0;
    return score;
}

int Game::gatherDice(int value)
{
    for (int i = 0; i < 5; i++)
    {
        if (dices[i].getFaceValue() == value)
        {
            tempScore += value;
        }
    }
    return tempScore;
}

void Game::displayBoxes()
{
    for (int i = 0; i < 13; i++)
    {
        std::cout << "Box " << (i + 1) << ": " << *(i + boxes) << std::endl;
    }
}