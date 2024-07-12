#pragma once

class Die
{
private:
    int sides, faceValue, score;
    int const bonus;
    int const SIDES;

public:
    Die();
    Die(int Sides);
    void roll();
    void roll(int dicesRolled);
    int getFaceValue();
    
};