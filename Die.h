#pragma once
#include <iostream>

class Die
{
private:
    int sides, faceValue;
    int const SIDES;
    std::string side1OfDice = " ___________";
    std::string oddDice = "|     o     |";
    std::string evenDice1 = "| o         |";
    std::string evenDice2 = "|         o |";
    std::string diceBlank = "|           |";

public:
    Die();
    Die(int sides);
    void roll();
    void printRoll();
    int getFaceValue();
    std::string dieToString(int value);
};