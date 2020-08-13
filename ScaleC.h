#pragma once
#include "Abstract.h"
#include "Shape.h"
class ScaleC :
    public Abstract
{
public:
    Shape* shapes;
    int z;
    ScaleC(Shape* a, int z);
    void execute();
    void unexecute();
};

