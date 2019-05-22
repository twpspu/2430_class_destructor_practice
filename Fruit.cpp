#include "Fruit.h"

Fruit::Fruit(int banana, int pineapple, int durian, int dragon):
    numBanana(new int(banana)),
    numPineapple(new int(pineapple)),
    numDurian(new int(durian)),
    numDragonFruit(new int(dragon))
{
}

Fruit::~Fruit() {
    delete numBanana;
    delete numPineapple;
    delete numDurian;
    delete numDragonFruit;
}

int Fruit::getNumTotalFruits() {
    return *numBanana + *numPineapple + *numDurian + *numDragonFruit;
}

Fruit &Fruit::operator=(const Fruit &another){
    *numBanana = *another.numBanana;
    *numPineapple = *another.numPineapple;
    *numDurian = *another.numDurian;
    *numDragonFruit = *another.numDragonFruit;

    return *this;
}
