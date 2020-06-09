#include"GeometricObject.h"
using namespace std;

GeometricObject::GeometricObject()
{
	color = "white";
}

void GeometricObject::setColor(string newcolor)
{
	color = newcolor;
}
string GeometricObject::getColor()
{
	return color;
}

