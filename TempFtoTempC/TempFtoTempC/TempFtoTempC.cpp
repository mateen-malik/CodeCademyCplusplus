
#include <iostream>
using namespace std;

double FtoC(double F);

int main()
{
	double tempf = 0;
	double tempc = 0;
	cout << "Give the temprature in fahrenheit: ";
	cin >> tempf;

	tempc = FtoC(tempf);
	cout << "The temprature in celsius is: " << tempc << endl;

	system("pause>0");
}

double FtoC(double F) {
	double F1 = F - 32;
	double tempc = F1 / 1.8;
	return tempc;
}