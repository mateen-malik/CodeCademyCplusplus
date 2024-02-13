#include <iostream>
#include "coffee.h"

int main()
{
    //ordering a coffee with different combinations of sugar and milk!
    std::string coffee = make_coffee(true, true);
    std::cout << coffee << std::endl;

    system("pause>0");
    return 0;
}