#include<iostream>
#include"Ball.h"
#include"Cube.h"
#include"GeometricObject.h"
#include<string>
#include<iomanip>
using namespace std;

void display(GeometricObject& g)
{
	cout << ", area:" << g.getArea() << ", volume:" << g.getVolume() << ", color:" << g.getColor() << endl;
}
int main()
{
	double r, l;
	string c1, c2;
	cin >> r >> c1 >> l >> c2;

	Ball ball(r);
	ball.setColor(c1);
	cout << "Ball" << endl;
	cout << fixed << setprecision(1) << "radius:" << 1.0*ball.getRadius();
	display(ball);
	Cube cube(l);
	cube.setColor(c2);
	cout << "Cube" << endl;
	cout << fixed << setprecision(1) << "length:" << 1.0*cube.getLength();
	display(cube);

	system("pause");
	return 0;
}