#include <iostream>
//function decleration
std::string greetings(std::string name); 

//main function
int main()
{
	std::string greeting = greetings("Mateen");
	std::cout << greeting << std::endl;
	system("pause>0");
	return 0;
}

//function definition
std::string greetings(std::string name) {
	return "Hello " + name + " welcome!\n";
}