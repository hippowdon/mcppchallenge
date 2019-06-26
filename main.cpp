
#include <iostream>
#include "chapter1_2.h"


int main() 
{
    int a, b;
    std::cout << "Enter 2 numbers:";
    std::cin >> a >> b;


    std::cout << "GCD is " << gcd(a, b) << std::endl;

    return 0;
}
