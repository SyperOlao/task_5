#include "Sides.h"
#include "math.h"

bool Sides::isExists(double a, double b, double c)
{
	return a + b > c && a + c > b && b + c > a;
}

void Sides::setA(double a)
{
	this->a = a;
}

void Sides::setB(double b)
{
	this->b = b;
}

void Sides::setC(double c)
{
	this->c = c;
}

double Sides::getA()
{
	return a;
}

double Sides::getB()
{
	return b;
}

double Sides::getC()
{
	return c;
}

double Sides::median()
{
	return 0.5 * sqrt(2 * a * a + 2 * b * b - c * c);
}

double Sides::height()
{
	double p = (a + b + c) / 2;
	return 2 * sqrt(p * (p - a) * (p - b) * (p - c)) / a;
}

double Sides::bisector()
{
	double p = (a + b + c) / 2;
	return 2 * sqrt(a * b * p * (p - c)) /(a + b);

}
