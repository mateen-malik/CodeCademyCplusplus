#include <iostream>
using namespace std;


bool isPrimeNumber(int number);


//void main() {
//	int number;
//	cout << "Give your number to find out if it's a prime number: ";
//	cin >> number;
	/*bool isPrime = true;
		for (int i = 2; i < number; i++) {
			if (number % i == 0) {
			isPrime = false;
			break;
		    }
	
	    }*/
	/*bool isPrime = isPrimeNumber(number);
	if(isPrime==true){
		cout << number << " is a prime number!\n";
	}
	else{
		cout << number << " is not a prime number!\n";
	}*/

void main()
{
int counter = 0;
int number = 0;
cout << "Give me the upper range to find prime numbers in: ";
cin >> number;
	for (int i = 2; i <= number; i++) {
		bool isPrime = isPrimeNumber(i);
		if (isPrime == true) {
			counter = counter + 1;
			cout << i << " is a prime number" << endl;
		}
	}
	cout << "The total prime numbers in this range are " << counter << endl;
		
	system("pause>0");
	//return 0;
}

bool isPrimeNumber(int number) {
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}