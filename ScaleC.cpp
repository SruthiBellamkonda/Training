#include "ScaleC.h"
#include"Shape.h"
ScaleC::ScaleC(Shape* a, int z)
{
	this->shapes = a;
	this->z =z;

}
void ScaleC::execute()
{
	shapes->Scale(z);
}
void ScaleC::unexecute()
{
	shapes->unscale(z);
}