#include <iostream>
#include "Fruit.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Fruit *fruit = new Fruit(1, 2, 3, 4);

    cout << fruit->getNumTotalFruits() << endl;

    int z = 0;
    for (int i = 0; i < 10000000; i++) {
        for (int j = 0; j < 10000000; j++) {
            Fruit *t = new Fruit(1,2,3,4);
            int x = t->getNumTotalFruits();
            int y = x + 1;
            z += y;
        }
        cout << "yay" << endl;
    }
    cout << z << endl;
    return 0;
}