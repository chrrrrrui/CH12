#ifndef BALL_H
#define BALL_H
#include"GeometricObject.h"
class Ball:public GeometricObject
{
private:
	double radius;
public:
	Ball();
	Ball(double);

	void setRadius(double);
	double getRadius();
	double getVolume();
	double getArea();
};
#endif // !BALL_H

