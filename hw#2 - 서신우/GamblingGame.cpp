#include <iostream>
#include "GamblingGame.h"
using namespace std;

int* GamblingGame::run() {
    int* array = new int[4];

    srand(time(NULL));
    num1 = rand() % 3;
    num2 = rand() % 3;
    num3 = rand() % 3;

    array[0] = num1;
    array[1] = num2;
    array[2] = num3;

    if (num1 == num2 && num2 == num3)
    {
        array[3] = 1;
    }
    else
    {
        array[3] = 0;
    }

    return array;
}