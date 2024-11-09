#include <iostream>
#include <cstring>
#include "Printer.h"
using namespace std;

class PrinterLaser : public Printer {
public:
    PrinterLaser(string model, string manufacturer, int availableCount, int inkCount)
    {
        this->model = model;
        this->manufacturer = manufacturer;
        this->availableCount = availableCount;
        this->availableToner = inkCount; 
        this->printedCount = 0;
    };
    // ~PrinterLaser(); 

int availableToner;

void printLaser(int pages)
{   
    if (availableCount >= pages && availableToner >= pages)
    {
        if (pages != 0)
        {
            print();
        }
        availableCount -= pages;
        availableToner -= pages;
        printedCount++;
        cout << model + " " + manufacturer + " 남은 종이 " << availableCount << "장 남은 토너 " << availableToner << endl;
    }
    else
    {
        cout << "용지 또는 토너가 부족하여 프린트할 수 없습니다." << endl;
    };
}
};