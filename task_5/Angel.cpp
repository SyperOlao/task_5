#include "Angel.h"
#include "math.h"

void Angel::setA(double a)
{
	this->a = a;
}

void Angel::setB(double b)
{
	this->b = b;
}

void Angel::setAngel(double angel)
{
	this->angel = angel;
}

double Angel::getA()
{
	return a;
}

double Angel::getB()
{
	return b;
}

double Angel::getAngel()
{
	return angel;
}

double Angel::median()
{
	return sqrt((double)a * a + b * b + (double)2 * a * b * cos(angel)) / 2;
}

double Angel::height()
{
	return b*sin(angel);
}

double Angel::bisector()
{
	return 2 * a * b * cos(angel / 2) / (a + b);
}
