// Leapyear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>



//int main()
//{
//	int year = 1900;
//	int digitcount = 0;
//	std::cout << "Input the year: ";
//	std::cin >> year;
//	std::string numberStr = std::to_string(year);
//	//std::cout << "numberStr: " << numberStr << std::endl;
//	digitcount = numberStr.length();
//	std::cout << "The number of digits in a year provided are: " << digitcount << std::endl;
//	if (digitcount > 4) {
//		std::cout << "The year " << year << " is of wrong length. Restart the program and provide the year which is 4 digits long." << std::endl;
//		system("pause>0");
//		return 0;
//	}
//
//	if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) {
//		std::cout << "The " << year << " is a leap year, it has 366 days." << std::endl;
//	}
//	else {
//		std::cout << "The year " << year << " is not a leap year, it has 365 days." << std::endl;
//	}
//	system("pause>0");
//	return 0;
//}

int main() {

    int y = 0;

    std::cout << "Enter year: ";
    std::cin >> y;

    if (y < 1000 || y > 9999) {

        std::cout << "Invalid entry.\n";

    }
    else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {

        std::cout << y;
        std::cout << " falls on a leap year.\n";

    }
    else {

        std::cout << y;
        std::cout << " is not a leap year.\n";

    }
    system("pause>0");
    return 0;
}

