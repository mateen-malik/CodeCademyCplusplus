//Write a for loop that iterates through the delivery_order vector (from 0 to delivery_order.size()). And add each order to total during each iteration.

#include <iostream>
#include <vector>

int main() {

    std::vector<double> delivery_order;
    double total = 0.0;

    delivery_order.push_back(8.99); //push_back is to add an element in the vector and pop_back is to delete an element from the vector
    delivery_order.push_back(3.75);
    delivery_order.push_back(0.99);
    delivery_order.push_back(5.99);

    std::cout << "Vector size: " << delivery_order.size() << std::endl;


    // Calculate the total using a for loop:
    for (int i = 0; i < delivery_order.size(); i++) {
        total = total + delivery_order[i];


    }

    //double total = 0.0;
    std::cout << "Total delivery order: " << total << "$" << std::endl;

    system("pause>0");
    return 0;

}