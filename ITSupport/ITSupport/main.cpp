// ITSupport.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "it_support.h"
#include <iostream>


int main() {
	std::string ofattempt;
	
	std::cout << "Calling it_support function in the main().\n\n";
	std::cout << "Hello. IT.\n";
	std::cout << "Have you tried turning it off and on again? y/n\n";
	std::cin >> ofattempt;


	ITsupport(ofattempt);
	
	system("pause>0");
	return 0;

}

