/*
Matthias Kim
Functions With Circles
3/5/2021
Extra: Printed all of the odd numbers from 1-10
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Circles.h"

using namespace std;

int main()
{
	double area, volume;

	//print the column headers
	printf("%-15s %-15s\n", " Radii ", " Area ");
	printf("%-15s %-15s\n", "-------", "------");
	//loop through 10 and print each circle's area with the assigned radius
	for (int i = 1; i <= 10; i++) {
		printf("%-15i %-15.1f\n", i, calculateArea(i));
	}

	//linebreak in between
	cout << "\n" << endl;

	//print the column headers for even numbers
	printf("%-15s %-15s\n", " Even #s ", " Volume ");
	printf("%-15s %-15s\n", "---------", "--------");
	//start at the lowest even number and go up to 10
	for (int i = 2; i <= 10; i += 2) {
		printf("%-15i %-15.1f\n", i, calculateVolume(i));
	}
	
	//linebreak in between
	cout << "\n" << endl;

	//EXTRA:
	//print the column headers for odd numbers
	printf("%-15s %-15s\n", " Odd #s ", " Volume ");
	printf("%-15s %-15s\n", "--------", "--------");
	//start at the lowest odd number and go up to 9
	for (int i = 1; i < 10; i += 2) {
		printf("%-15i %-15.1f\n", i, calculateVolume(i));
	}

	//linebreak in between
	cout << "\n" << endl;

	//ask for two numbers
	vector<string> sRadius(2);	vector<int> iRadius(2);  vector<double> vols(2);
	double diff;
	bool yesOrNo;

	cout << "You will now need to enter two radii to calculate the difference between two spheres with their respective radius." << endl;
	for (int i = 0; i < 2; i++)
	{
		//get user input for the radius
		cout << "Enter radius " << i+1 << ":  ";
		getline(cin, sRadius.at(i));
		//pass input to a function that will return true if the number is not an integer and false if it is an integer
		yesOrNo = checkValidNumInput(sRadius.at(i));

		//if the boolean is true, run this loop continuously until it returns false
		while (yesOrNo) {
			cout << "  Invalid, try again:  ";
			getline(cin, sRadius.at(i));
			yesOrNo = checkValidNumInput(sRadius.at(i));
		}

		//convert the checked input to an integer and store it in a vector
		iRadius.at(i) = stoi(sRadius.at(i));
		//pass the newly converted integer value to a function that calculates volume and stores it in the vector
		vols.at(i) = calculateVolume(iRadius.at(i));
	}
	
	//assign the vector placeholder to a respective variable
	double vol1 = vols.at(0);
	double vol2 = vols.at(1);

	//print the standard table to display values
	printf("\n%-15s %-15s\n", " Radii ", " Volume ");
	printf("%-15s %-15s\n", "-------", "--------");
	for (int i = 0; i < 2; i++) {
		printf("%-15i %-15.1f\n", iRadius.at(i), vols.at(i));
	}
	
	//determine which number to subtract from the other, then print out the final message accordingly
	if (vol1 > vol2) {
		diff = vol1 - vol2;
		printf("%-15s %-15.1f\n", "Difference:", diff);

	}
	else {
		diff = vol2 - vol1;
		printf("%-15s %-15.1f\n", "Difference:", diff);
	}
}