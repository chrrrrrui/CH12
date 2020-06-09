#include"Cube.h"
using namespace std;

Cube::Cube()
{
	length = 1;
}
Cube::Cube(double newlength)
{
	setLength(newlength);
}
void Cube::setLength(double newlength)
{
	length = newlength;
}
double Cube::getLength()
{
	return length;
}
double Cube::getArea()
{
	return 6 * length*length;
}
double Cube::getVolume()
{
	return length * length*length;
}