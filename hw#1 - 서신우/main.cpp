#include <iostream>
#include "Calc.h"
using namespace std;

int main() {
    Add a;
    Sub s;
    Mul m;
    Div d;
    int num1, num2, result;
    char op;

    while (1)
    {
        cout << "두 정수와 연산자를 입력하세요 : ";
        cin >> num1>> num2 >> op;

        switch (op)
        {
            case '+':
                a.setValue(num1, num2);
                result = a.calculate();
                break;
            case '-':
                s.setValue(num1, num2);
                result = s.calculate();
                break;
            case '*':
                m.setValue(num1, num2);
                result = m.calculate();
                break;
            case '/':
                d.setValue(num1, num2);
                result = d.calculate();
                break;            
            default:
                result = 0;
                break;
        }

        cout << result << endl;
    }
};