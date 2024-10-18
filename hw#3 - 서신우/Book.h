#include <iostream>
#include <cstring>
using namespace std;

class Book {
    char *title;
    int price;
public:
    Book(const char* title, int price);
    ~Book();
    void set(char* Title, int price);
    void show() { cout << title << ' ' << price << "원" << endl; }
};