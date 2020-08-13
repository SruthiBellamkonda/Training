#include "MoveC.h"
#include "Shape.h"

MoveC::MoveC(Shape* a, int x, int y)
{
	this->shapes = a;
	this->x = x;
	this->y = y;
	
}
void MoveC::execute()
{
	shapes->Move(x, y);
}
void MoveC::unexecute()
{
	shapes->unMove(x, y);
}
