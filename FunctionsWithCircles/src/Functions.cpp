/*
Matthias Kim
Functions With Circles
3/5/2021
Extra: Printed all of the odd numbers from 1-10
*/

//this define is so that I can use M_PI
#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

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

bool checkValidNumInput(string tester)
{
	//try-catch to validate input
	try {
		double temp = stod(tester);
		int num = stoi(tester); // error trap this with a try/catch block

		if (temp != num) {
			return true;
		}
	}
	catch (invalid_argument& e) {
		//prompt user for valid input/continue loop
		return true;
	}
	return false;
}