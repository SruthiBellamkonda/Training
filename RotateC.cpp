#include "RotateC.h"
#include "Shape.h"
RotateC::RotateC(Shape* a)
{
	this->shapes = a;
	

}
void RotateC::execute()
{
	shapes->rotate();
}
void RotateC::unexecute()
{
	shapes->unrotate();
}