#pragma once
#include "GameLogic.h"

class Console
{
private:
    Game newGame;
    char answer;
    int ans, ansForScore, ans2ForScore, round, gameRound;

public:
    Console();
    void changeABox();
    void startGame();
    void continueGame();
    void endGame();
    void gameStats();
    int getGameRound();
};