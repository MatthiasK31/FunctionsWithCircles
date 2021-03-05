#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

double calculateArea(int r)
{
	double area = M_PI * pow(r, 2);
	return area;
}

double calculateVolume(int r)
{
	double volume = (4 / 3) * M_PI * pow(r, 3);
	return volume;
}