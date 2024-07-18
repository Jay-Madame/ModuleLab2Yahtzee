#pragma once
#include "GameLogic.h"
#include "Die.h"

class Console
{
private:
    Game newGame;
    char answer;
    int ans, ansForScore, ans2ForScore, round, gameRound;

public:
    Console();
    void playingYahtzee();
    void changeABox();
    void continueGame();
    void endGame();
    void gameStats();
    int getGameRound();
};