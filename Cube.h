#ifndef CUBE_H
#define CUBE_H
#include"GeometricObject.h"
class Cube:public GeometricObject
{
private:
	double length;
public:
	Cube();
	Cube(double);

	void setLength(double);
	double getLength();

	double getArea();
	double getVolume();
};
#endif // !CUBE_H

