#pragma once
#include "Shape.h"
class Square :
    public Shape
{
public:
    Square(int ,int , int );
    void display() override;
    int len,c_x,c_y;
    void Move(int, int);
    void unMove(int x, int y);
    void Scale(int);
    void unscale(int);
   
};

