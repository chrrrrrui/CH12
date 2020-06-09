#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include<string>
using namespace std;
class GeometricObject
{
private:
	string color;
public:
	GeometricObject();
	

	void setColor(string);
	string getColor();

	virtual double getArea() = 0;
	virtual double getVolume() = 0;
};
#endif // !GEOMETRICOBJECT_H

