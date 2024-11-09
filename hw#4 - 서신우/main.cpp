#include <iostream>
#include <cstring>
#include "PrinterInkJet.h"
#include "PrinterLaser.h"
using namespace std;

int main() {
    PrinterInkJet inkPrinter("Officejet V40", "HP", 5, 10);
    PrinterLaser laserPrinter("SC-6x45", "삼성전자", 3, 20);

    cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;

    while (true)
    {
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력 : ";
        string input;
        getline(cin, input);
        int pages = stoi(input.substr(2));

        if (input[0] == '1')
        {
            inkPrinter.printInkJet(pages);
            laserPrinter.printLaser(0);
        }

        if (input[0] == '2')
        {
            inkPrinter.printInkJet(0);
            laserPrinter.printLaser(pages);
        }
    }
}

