#include <iostream>
#include <cstring>
using namespace std;
#ifndef _MAIN_H
#define _MAIN_H

class Printer {
    public:
        string model;
        string manufacturer;
        int printedCount;
        int availableCount;
        void print(){ cout << "프린트하였습니다." << endl; };
};

#endif