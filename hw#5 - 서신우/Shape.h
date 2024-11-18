#include <iostream>
using namespace std;

#ifndef _MAIN_H
#define _MAIN_H

class Shape {
protected:
	virtual void draw() = 0;
public:
    Shape* next;
	Shape() { next = NULL; }
	virtual ~Shape() { }
    void paint();
    Shape* add(Shape* p);
    Shape* getNext() { return next; }
};

#endif