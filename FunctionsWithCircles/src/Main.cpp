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
	vector<int> radius(2);
	cout << "You will now need to enter two radii to calculate the difference between two spheres with their respective radius." << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter radius " << i+1 << ":  ";
		cin >> radius.at(i);
		while (1)
		{
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "You have entered wrong input" << endl;
				cin >> radius.at(i);
			}
			if (!cin.fail())
				break;
		}
	}


	
}