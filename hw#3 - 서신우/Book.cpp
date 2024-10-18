#include <iostream>
#include <cstring>
#include "Book.h"
using namespace std;

// 생성자
Book::Book(const char* title, int price) {
    int len = strlen(title);
    this -> title = new char [len + 1]; // title 문자열 공간 할당
    this -> price = price;
    strcpy(this -> title, title);  // title 에 문자열 복사
}

// 소멸자
Book::~Book() {
    delete [] title;  // 동적 할당 메모리 소멸
}

void Book::set(char* title, int price) {
    if (title) {  // 멤버 변수 title에 할당된 메모리가 있으면 먼저 반환..
        delete [] title;
    }

    int len = strlen(title);
    this -> title = new char(len + 1);
    strcpy(this -> title, title);
    this -> price = price;
}

Book::Book(const Book& book) {
    int len = strlen(book.title);
    this -> title = new char [len + 1];
    this -> price = book.price;
    strcpy(this -> title, book.title);
}