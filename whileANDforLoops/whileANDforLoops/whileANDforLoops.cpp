// whileANDforLoops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//int main() {
//    int count = 0;
//
//    // While loop
//    while (count < 5) {
//        std::cout << "While loop iteration: " << count << std::endl;
//        count++;
//    }
//
//    // If statement
//    if (count > 4) {
//        std::cout << "If statement is true." << std::endl;
//    }
//
    //system("pause>0");
    //return 0;
//}


/*As an example of iteration, we have the first program ever to run on a stored-program computer (the EDSAC). 
It was written and run by David Wheeler in the computer laboratory at Cambridge University, 
England, on May 6th, 1948, to calculate and print a simple list of square,
I write the code for it which is as follows,*/
int main() {

    int i = 0;
    int square;

    // Write a while loop here:
    while (i < 10) {
        square = i * i;
        //std::cout << i << " " << std::endl;
        std::cout << i << " -> " << square << std::endl;

        i++;
    }
    system("pause>0");
    return 0;
}


//int main() {
//    int i = 0;
//
//    while (i < 10) {
//
//        std::cout << "i will not throw paper airplanes in class.\n";
//        i++;
//
//    }
//    system("pause>0");
//    return 0;
//}

//
//int main() {
//    
//    std::string Bottles = i bottles of pop on the wall.
//        Take one down and pass it around.
//        i - 1 bottles of pop on the wall.;
//    
//    std::string Bottles = std::to_string(Bottles);
//    Bottles = numberStr.length();
//    std::cout << "99Bottles: " << Bottles << std::endl;
//
//
//}
