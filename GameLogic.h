#pragma once
#include "Die.h"

class Game
{
private:
    int score, diceRoll;
    int boxes[13];
    int const bonus;

public:
    Game();
    Game(int value);
    rollDices();


};
