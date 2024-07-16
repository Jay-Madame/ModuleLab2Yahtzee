#include <iostream>
#include "Die.h"
#include <ctime>

int main()
{
    srand(time(0));
    Die newDie;
    newDie.roll();
    std::cout << newDie.dieToString(newDie.getFaceValue());
    return 0;
}