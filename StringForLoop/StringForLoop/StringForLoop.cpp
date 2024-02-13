#include <iostream>
#include <string>

int main() {

	std::string mystring1 = "i bottles of pop on the wall.";
	std::string mystring2 = "Take one down and pass it around.";
	std::string mystring3 = "i-1 bottles of pop on the wall.";

	// Write a for loop here:
	for (int i = 1; i > 0; i--) {

		std::cout << mystring1 << std::endl;
		std::cout << mystring2 << std::endl;
		std::cout << mystring3 << std::endl;

	}

	system("pause>0");
	return  0;


}


