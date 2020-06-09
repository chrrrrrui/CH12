#include"Ball.h"
using namespace std;

Ball::Ball()
{
	radius = 1;
}
Ball::Ball(double newradius)
{
	setRadius(newradius);
}
void Ball::setRadius(double newradius)
{
	radius = newradius;
}
double Ball::getRadius()
{
	return radius;
}
double Ball::getArea()
{
	return 4 * 3.14159*radius*radius;
}
double Ball::getVolume()
{
	return 4 * 3.14159*radius*radius*radius / 3;
}