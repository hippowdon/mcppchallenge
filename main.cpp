
#include <iostream>
#include "chapter1_3.h"


int main() 
{
    int a, b;
    std::cout << "Enter 2 numbers:";
    std::cin >> a >> b;


    std::cout << "LCM is " << least_common_multiple(a, b) << std::endl;

    return 0;
}
