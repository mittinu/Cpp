#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class GraphicEditor {
public:
    static string action;
    static string shape;
    static string deleteNum;

    static void showAction(){cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";}
    static void showShape(){cout << "선:1, 원:2, 사각형:3 >> ";}
    static void setAction(){
        cin >> action;
    }
    static void setShape(){
        cin >> shape;
    }
    static string getAction(){return action;}
    static string getShape(){return shape;}
    static void showDelete(){cout << "삭제하고자 하는 도형의 인덱스 >> ";}
    static void setDeleteNum(){
        cin >> deleteNum;
    }
};