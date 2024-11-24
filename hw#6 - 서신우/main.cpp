#include <iostream>
#include <cstring>
#include <string>
#include <map>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
using namespace std;

int main() {
    bool isRunning = true;
    int option;
    int shape;
    vector<Shape*> v;

    cout << "그래픽 에디터입니다." << endl;

    while (isRunning)
    {
        cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
        cin >> option;
        cout << endl;

        switch (option)
        {
            case 1:
                {
                    cout << "선:1, 원:2, 사각형:3 >> ";
                    cin >> shape;
                    cout << endl;
                    
                    if (shape == 1)
                    {
                        v.push_back(new Line());
                    }
                    else if (shape == 2)
                    {
                        v.push_back(new Circle());
                    }
                    else if (shape == 3)
                    {
                        v.push_back(new Rect());
                    }
                    else
                    {
                        cout << "해당 도형은 지원하지 않습니다." << endl;
                    }
                }
                break;
            case 2:
                {
                    int index;
                    cout << "삭제하고자 하는 도형의 인덱스 : ";
                    cin >> index;

                    v.erase(v.begin() + index);
                }
                break;
            case 3:
                {
                    for (int i = 0; i < v.size(); i++)
                    {
                        cout << i << " : ";
                        v.at(i)->paint();
                    }
                }
                break;
            case 4:
                isRunning = false;
                break;
            default:
                cout << "잘못 입력하셨습니다.." << endl;
                break;
        }
    }
    return 0;
}
