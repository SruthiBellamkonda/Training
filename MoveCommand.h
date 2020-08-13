#pragma once
#include "Shape.h"
#include "Abstract.h"
class MoveC :
    public Abstract
{
public:
    Shape* shapes;
    int x, y;
    MoveC(Shape* a, int x, int y);
    void execute();
    void unexecute();

};

