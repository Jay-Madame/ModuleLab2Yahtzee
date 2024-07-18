#include "Die.h"
#include "GameLogic.h"
#include <algorithm>
// constructors
Game::Game() : bonus(35)
{
    gameRounds = 0;
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

Game::~Game()
{
    delete[] boxes;
}

// rolling the Dices
int Game::rollDices()
{
    gameRounds++;
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

// changing some scores in ace through six
int Game::scoreChange(int box)
{
    tempScore--;
    *((box - 1) + boxes) = tempScore;
    score += tempScore;
    tempScore = 0;
    if (gameRounds == 13 && score == 63)
    {
        score += bonus;
    }
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

/* diff kinds of scoring... to be continued (doesn't work rn...
 and im too tired for this)
int Game::threeOfAKind(int value)
{
    int same = 0;
    for (int i = 0; i < 5; i++)
    {
        if (dices[i].getFaceValue() == value)
        {
            same++;
            tempScore += value;
        }
    }
    if (same >= 3)
    {
        return tempScore;
    }
    else
    {
        return 0;
    }
}

int Game::fourOfAKind(int value)
{
    int same = 0;
    for (int i = 0; i < 5; i++)
    {
        if (dices[i].getFaceValue() == value)
        {
            same++;
            tempScore += value;
        }
    }
    if (same >= 4)
    {
        return tempScore;
    }
    else
    {
        return 0;
    }
}

int Game::fullHouse(int value1, int value2)
{
    int same, same1 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (dices[i].getFaceValue() == value1)
        {
            same++;
            tempScore += value1;
        }
        else if (dices[i].getFaceValue() == value2)
        {
            same1++;
            tempScore += value2;
        }
    }
    if ((same == 3 || same == 2) && (same1 == 3 || same1 == 2))
    {
        return tempScore;
    }
    else
    {
        return 0;
    }
}

int Game::straight()
{
    int min = 0;
    int total = 0;
    bool isSequential;
    for (int i = 0; i < 5; i++)
    {
        if (dices[i].getFaceValue() > min)
        {
            isSequential = true;
            min = dices[i].getFaceValue();
            total += min;
        }
        else
        {
            isSequential = false;
            break;
        }
    }
    if (isSequential == true)
    {
        tempScore = total;
    }
    else
    {
        tempScore = 0;
    }
    return tempScore;
}

int Game::chance()
{
    for (int i = 0; i < 5; i++)
    {
        tempScore += dices[i].getFaceValue();
    }
    return tempScore;
}

Die *Game::binarySort(Die *arr, int size)
{
    for (int i = 1; i < size; ++i)
    {
        int key = arr[i].getFaceValue();
        int left = 0;
        int right = i - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (arr[mid].getFaceValue() > key)
                right = mid - 1;
            else
                left = mid + 1;
        }

        Die temp = arr[i];
        for (int j = i; j > left; --j)
        {
            arr[j] = arr[j - 1];
        }
        arr[left] = temp;
    }
    return arr;
}
int Game::Yahtzee()
{
    binarySort(dices, 5);
    int temp = straight();
    return temp != 0 ? temp : 0;
}
*/

// displaying scores
void Game::displayBoxes()
{
    for (int i = 0; i < 13; i++)
    {
        switch (i)
        {
        case 0:
            std::cout << "Aces: " << boxes[i];
            break;
        case 1:
            std::cout << "Twos: " << boxes[i];
            break;
        case 2:
            std::cout << "Threes: " << boxes[i];
            break;
        case 3:
            std::cout << "Fours: " << boxes[i];
            break;
        case 4:
            std::cout << "Fives: " << boxes[i];
            break;
        case 5:
            std::cout << "Sixes: " << boxes[i];
            break;
        case 6:
            std::cout << "Three of a Kind: " << boxes[i];
            break;
        case 7:
            std::cout << "Four of a Kind: " << boxes[i];
            break;
        case 8:
            std::cout << "Full house: " << boxes[i];
            break;
        case 9:
            std::cout << "Small straight: " << boxes[i];
            break;
        case 10:
            std::cout << "Large straight: " << boxes[i];
            break;
        case 11:
            std::cout << "Chance: " << boxes[i];
            break;
        case 12:
            std::cout << "Yahtzee: " << boxes[i];
            break;
        }
        std::cout << std::endl;
    }
}

int Game::getScore()
{
    return score;
}