#include <iostream>
#include <string>
#include <cstring>
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
#include "GraphicEditor.h"
using namespace std;

string GraphicEditor::action = "0";
string GraphicEditor::shape = "0";
string GraphicEditor::deleteNum = "0";

int main() {
    bool isRunning = true;
    Shape* pStart=NULL;
    Shape* pLast;
    Shape* next;

    cout << "그래픽 에디터입니다." << endl;

    while(isRunning)
    {
        GraphicEditor::showAction();
        GraphicEditor::setAction();

        switch (stoi(GraphicEditor::getAction()))
        {
            case 1:
                {
                    GraphicEditor::showShape();
                    GraphicEditor::setShape();
                    
                    if (GraphicEditor::getShape() == "1")
                    {
                        if (pStart == NULL)
                        {
                            pStart = new Line();
                            pLast = pStart;
                        }
                        else
                        {
                            Line *line = new Line();
                            pLast->next = line;
                            pLast = line;
                        }

                    }
                    else if (GraphicEditor::getShape() == "2")
                    {
                        if (pStart == NULL)
                        {
                            pStart = new Circle();
                            pLast = pStart;
                        }
                        else
                        {
                            Circle *circle = new Circle();
                            pLast->next = circle;
                            pLast = circle;
                        }
                    }
                    else if (GraphicEditor::getShape() == "3")
                    {
                        if (pStart == NULL)
                        {
                            pStart = new Rect();
                            pLast = pStart;
                        }
                        else
                        {
                            Rect *rect = new Rect();
                            pLast->next = rect;
                            pLast = rect;
                        }
                    }
                    else
                    {
                        cout << "잘못 입력하셨습니다." << endl;
                        break;
                    }
                }
                break;
            case 2:
                {
                    // GraphicEditor::showDelete();
                    // GraphicEditor::setDeleteNum();

                    // int deleteIndex = stoi(GraphicEditor::deleteNum);

                    // Shape* previous = pStart;

                    // for (int i = 0; i < deleteIndex; i++)
                    // {
                    //     // previous->paint();
                    //     // previous = previous->getNext();
                    //     if (previous != NULL)
                    //     {
                    //         Shape* q = previous->getNext();
                    //         delete previous;
                    //         previous = q;
                    //     }
                    // }

                    // cout << "####################" << endl;
                    // previous->getNext()->paint();
                    // cout << "####################" << endl;

                    // pStart = previous;
                    // Shape* current = previous;
                    // delete previous;


                    // cout << deleteIndex << " 번째 인덱스 삭제!!" << endl;

                    // cout << "=====================" << endl;
                    // current->paint();
                    // cout << "=====================" << endl;

                    // if (current->next == NULL)
                    // {
                    //     cout << "current is NULL" << endl;
                    // }
                    // else
                    // {
                    //     cout << "current is not NULL" << endl;
                    // }
                    // pStart = current;

                    // 많은 시도를 해보았지만 삭제 기능은 실패했습니다.. 죄송합니다..
                }
                break;
            case 3:
                {
                    Shape* p = pStart;

                    int index = 0;

                    while ( p != NULL)
                    {
                        cout << index << " : ";
                        p->paint();
                        p = p->getNext();
                        index++;
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