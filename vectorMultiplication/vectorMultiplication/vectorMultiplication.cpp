// vectorMultiplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//
//#include <iostream>
//#include <vector>
//
//int main()
//{
//    std::vector<int> vector;
//    int size;
//    std::cout << "Enter Vector Size: ";
//    std::cin >> size;
//    std::cout << "Now enter " << size << " values for the vector:" << std::endl;
//    for (int i = 0; i < size; i++) {
//        int value;
//        std::cin >> value;
//        vector.push_back(value);
//    }
//
//    // Display the vector
//    std::cout << "Vector values: ";
    //for (int i = 0; i < vector.size(); i++) {
    //    std::cout << vector[i] << " ";
    //}
//
//    //std::cout << "Give Initial Vector Values: ";
//    //std::cin >> vector;
//    //for (int i : vector) {
//    //    std::cout << i << " ";
//    //}
//    std::cout << "" << std::endl;
//    int firstelement = vector[0]*2;
//    int secondelement = vector[1]*2;
//    int thirdelement = vector[2]*2;
//    int fourthelement = vector[3]*2;
// 
//    std::cout << "Vector Multiplication of first four elements by 2: " << firstelement << " " << secondelement << " " << thirdelement << " " << fourthelement;
//
//    system("pause>0");
//    return 0;
//}



//#include <iostream>
//#include <vector>
//
//// Define first_three_multiples() here:
//void first_three_multiples(int num) {
//    //vector<int> vector = {1, 2, 3, 4, 5};
//    int num1 = num * 1;
//    int num2 = num * 2;
//    int num3 = num * 3;
//
//    std::vector<int> vector = { num1, num2, num3 };
//
//    std::cout << "First three multiplies of the given number are: ";
//
//    for (int i = 0; i < vector.size(); i++) {
//        std::cout << vector[i] << " ";
//    }
//
//}
//
//int main() {
//   
//    first_three_multiples(5);
//
//
//    system("pause>0");
//    return 0;
//
//}



#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {

    std::vector<int> multiples{ num, num * 2, num * 3 };

    return multiples;

}

int main() {

    for (int element : first_three_multiples(8)) {
        std::cout << element << "\n";
    }

    system("pause>0");
    return 0;

}