// weightonMars.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Create a program that takes in the weight of an item and then calculates how much that item would weigh on Mars.

#include <iostream>
using namespace std;
double weightonmars(double e) {
	double weightMars = 0;
	weightMars = 0.38 * e;
	return weightMars;
}

int main()
{
	double  weighte;
	cout << "Provide weight on earth : ";
	cin >> weighte;
	double weightm = weightonmars(weighte);
	cout << "The weight on mars is : " << weightm << endl;

	system("pause>0");

}

