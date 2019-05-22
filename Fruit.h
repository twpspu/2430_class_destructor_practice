#ifndef INC_2430_CLASS_DESTRUCTOR_PRACTICE_FRUIT_H
#define INC_2430_CLASS_DESTRUCTOR_PRACTICE_FRUIT_H


class Fruit {
public:
    // Constructor:
    //   Allocate new integer instances to each private integer pointers.
    //   Also, assign parameter values to corresponding member variables respectively.
    Fruit(int, int, int, int);

    // Destructor:
    //   Deallocate all private integer instances.
    ~Fruit();

    // Return the sum of all private integer instance values.
    int getNumTotalFruits();

    // copy assignment operator -- you need to implement DEEP COPY.
    Fruit& operator=(const Fruit& another);

private:
    int* numBanana;
    int* numPineapple;
    int* numDurian;
    int* numDragonFruit;
};


#endif //INC_2430_CLASS_DESTRUCTOR_PRACTICE_FRUIT_H
