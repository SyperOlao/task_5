#include "Sides.h"

bool Sides::isExists(int a, int b, int c)
{
	return a + b > c && a + c > b && b + c > a;
}
