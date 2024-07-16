#include "Die.h"
#include <string>

Die::Die() : SIDES(6)
{
    roll();
}

Die::Die(int sides) : SIDES(sides)
{
    roll();
}

void Die::roll()
{
    faceValue = rand() % SIDES + 1;
    std::cout << " \n"
              << "                  (( _______\n"
              << "     _______     /\O    O\\n"
              << "    /O     /\   /  \      \\n"
              << "   /   O  /O \ / O  \O____O\ ))\n"
              << "((/_____O/    \\    /O     /\n"
              << "  \O    O\    / \  /   O  /\n"
              << "   \O    O\ O/   \/_____O/\n"
              << "    \O____O\/ ))          ))\n"
              << "  ((";
}

int Die::getFaceValue()
{
    return faceValue;
}

std::string Die::dieToString(int value)
{
    std::string dieFace = "";
    switch (getFaceValue())
    {
    case 1:
        dieFace = "o";
        break;
    case 2:
        dieFace = "oo";
        break;
    case 3:
        dieFace = "ooo";
        break;
    case 4:
        dieFace = "oooo";
        break;
    case 5:
        dieFace = "ooooo";
        break;
    case 6:
        dieFace = "oooooo";
        break;
    }
}