#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

#include "Circles.h"

using namespace std;

int main()
{
	//print the column headers
	printf("%-15s %-15s\n", " Radii ", " Area ");
	printf("%-15s %-15s\n", "-------", "------");
	//loop through 10 and print each circle's area with the assigned radius
	for (int i = 0; i < 10; i++) {
		double area = calculateArea(i);
		printf("%-15i %-15.1f\n", i + 1, area);
	}

	//linebreak in between
	cout << "\n\n" << endl;

	//print the column headers
	printf("%-15s %-15s\n", " Radii ", " Volume ");
	printf("%-15s %-15s\n", "-------", "--------");
	//start at the lowest even number and go up to 10
	for (int i = 2; i <= 10; i += 2) {
		double volume = calculateVolume(i);
		printf("%-15i %-15.1f\n", i, volume);

	}

	//linebreak in between
	cout << "\n\n" << endl;

	//ask for two numbers
	vector<string> sRadius(2);	vector<int> iRadius(2);
	double vol1, vol2, diff;
	bool yesOrNo;

	/*
	WORK ON THIS DURING COMPSCI
	*/
	cout << "You will now need to enter two radii to calculate the difference between two spheres with their respective radius." << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter radius " << i+1 << ":  ";
		getline(cin, sRadius.at(i));
		yesOrNo = checkValidNumInput(sRadius.at(i));

		while (yesOrNo) {
			cout << "  Invalid, try again:  ";
			getline(cin, sRadius.at(i));
			yesOrNo = checkValidNumInput(sRadius.at(i));
		}

		iRadius.at(i) = stoi(sRadius.at(i));
	}

	vol1 = calculateVolume(iRadius.at(0));
	vol2 = calculateVolume(iRadius.at(1));
	
	if (vol1 > vol2)
		diff = vol1 - vol2;
	else
		diff = vol2 - vol1;






	
}