#include <iostream>
using namespace std;

double MilestoKm(double m) {
	double km = 0;
	km = 1.60934 * m;
	return km;
}

int main()
{
	double  miles;
	cout << "Provide distance in miles : ";
	cin >> miles;
	double km = MilestoKm(miles);
	cout << "The distance in km is : " << km << endl;

	system("pause>0");

}
