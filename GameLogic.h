#pragma once
#include "Die.h"

class Game
{
private:
    Die dices[5] = {Die(), Die(), Die(), Die(), Die()};
    int score, tempScore, diceRoll, rounds, gameRounds;
    int *boxes = nullptr;
    int const bonus;

public:
    Game();
    Game(int value);
    ~Game();
    int rollDices();
    int rollDices(int dicesToRoll);
    int scoreChange(int box);
    int gatherDice(int value);
    int threeOfAKind(int value);
    int fourOfAKind(int value);
    int fullHouse(int value1, int value2);
    int straight();
    int chance();
    int Yahtzee();
    void displayBoxes();
    int getScore();
};
