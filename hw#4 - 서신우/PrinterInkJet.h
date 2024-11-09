#include <iostream>
#include <cstring>
#include "Printer.h"
using namespace std;

class PrinterInkJet : public Printer {
public:
    PrinterInkJet(string model, string manufacturer, int availableCount, int inkCount)
    {
        this->model = model;
        this->manufacturer = manufacturer;
        this->availableCount = availableCount;
        this->availableInk = inkCount; 
        this->printedCount = 0;
    };
    // ~PrinterInkJet();
    int availableInk;

    void printInkJet(int pages)
    {   
        if ((availableCount >= pages) && (availableInk >= pages))
        {
            if (pages != 0)
            {
                print();
            }
            availableCount -= pages;
            availableInk -= pages;
            printedCount++;
            cout << model + " " + manufacturer + " 남은 종이 " << availableCount << "장 남은 잉크 " << availableInk << endl;
        }
        else
        {
            cout << "용지 또는 잉크가 부족하여 프린트할 수 없습니다." << endl;
        };
    }
};