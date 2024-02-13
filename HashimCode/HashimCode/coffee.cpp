//making a coffee with different options of sugar and milk


#include <iostream>




std::string make_coffee(bool sugar, bool milk) {
	std::string coffee = "Here is your coffee ";

	if (sugar == false && milk == false) {
		coffee += "without sugar and milk!";
		return coffee;
		
	}
	else if (sugar == false && milk == true) {
		coffee += "with milk!";
		return coffee;
	}
	else if (sugar == true && milk == false) {
		coffee += "with sugar!";
		return coffee;
	}
	else if (sugar == true && milk == true) {
		coffee += "with sugar and milk!";
		return coffee;
	}
}



