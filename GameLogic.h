#pragma once
#include "Die.h"

class Game
{
private:
    Die dices[5] = {Die(), Die(), Die(), Die(), Die()};
    int score, diceRoll, rounds;
    //int *boxes = nullptr;
    int const bonus;

public:
    Game();
    Game(int value);
    int rollDices();
    int rollDices(int dicesToRoll);
    int whichBox(int box);
    int scoreChange(int value);
};
