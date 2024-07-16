#pragma once
#include <iostream>

class Die
{
private:
    int sides, faceValue;
    int const SIDES;

public:
    Die();
    Die(int sides);
    void roll();
    int getFaceValue();
    std::string dieToString(int value);
};