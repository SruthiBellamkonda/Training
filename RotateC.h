#pragma once
#include "Abstract.h"
#include "Shape.h"
class RotateC :
    public Abstract
{
public:
    Shape* shapes;
    int l, b;
    RotateC(Shape* a);
    void execute();
    void unexecute();
};

