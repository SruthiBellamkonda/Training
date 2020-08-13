#pragma once
#include "Shape.h"
class Rectangle :
    public Shape
{
public:
    Rectangle(int l, int b, int c_x, int c_y);
    void display();
    int length;
    int breadth;
    int c_x;
    int c_y;
    int l, b;
    void Move(int, int);
    void Scale(int);
    void unscale(int);
    void rotate();
    void unrotate();
    void unMove(int, int);
};


