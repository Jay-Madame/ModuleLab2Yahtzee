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
}

void Die::printRoll()
{
    std::cout << " \n"
              << "                    ((______" << std::endl
              << "     _______        /\\O    O\\" << std::endl
              << "    /O      /\\     /  \\      \\" << std::endl
              << "   /   O   /O \\   / O  \\O____O\\ ))" << std::endl
              << "((/______O/    \\  \\    /O     /" << std::endl
              << "  \\O    O\\    /    \\  /   O  /" << std::endl
              << "   \\O    O\\  /      \\/_____O/" << std::endl
              << "    \\O____O\\/ ))             ))" << std::endl
              << "  ((" << std::endl;
}
int Die::getFaceValue()
{
    return faceValue;
}

std::string Die::dieToString(int value)
{
    std::string dieFace = "";
    switch (value)
    {
    case 1:
        dieFace = "\n" + side1OfDice + "\n" + diceBlank + "\n" + diceBlank + "\n" + oddDice + "\n" + diceBlank + "\n" + diceBlank + "\n" + " -----------";
        break;
    case 2:
        dieFace = "\n" + side1OfDice + "\n" + evenDice1 + "\n" + diceBlank + "\n" + oddDice + "\n" + diceBlank + "\n" + evenDice2 + "\n" + " -----------";
        break;
    case 3:
        dieFace = "\n" + side1OfDice + "\n" + evenDice1 + "\n" + diceBlank + "\n" + oddDice + "\n" + diceBlank + "\n" + evenDice2 + "\n" + " -----------";
        break;
    case 4:
        dieFace = "\n" + side1OfDice + "\n" + "| o       o |\n" + diceBlank + "\n" + diceBlank + "\n" + diceBlank + "\n" + "| o       o |\n" + " -----------";
        break;
    case 5:
        dieFace = "\n" + side1OfDice + "\n" + "| o       o |\n" + diceBlank + "\n" + oddDice + "\n" + diceBlank + "\n" + "| o       o |\n" + " -----------";
        break;
    case 6:
        dieFace = "\n" + side1OfDice + "\n" + "| o       o |\n" + diceBlank + "\n" + "| o       o |\n" + diceBlank + "\n" + "| o       o |\n" + " -----------";
        break;
    }
    return dieFace;
}