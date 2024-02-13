// PassByReference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void swapnumbers (int &i, int &j) {
    int temp = i;
    i = j;
    j = temp;

    std::cout << "value of i is: " << i << std::endl;
    std::cout << "value of j is: " << j << std::endl;

}



int main()
{
    int a = 10;
    int b = 20;

    swapnumbers(a, b);
    std::cout << "value of a is: " << a << std::endl;
    std::cout << "value of b is: " << b << std::endl;
    
 }

