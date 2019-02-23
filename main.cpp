
#include <iostream>
#include "chapter1_1.h"


int main() 
{
    int n = 0;
    std::cout << "Enter a number:";
    std::cin >> n;

    std::cout << "Sum is " << sum_of_naturals(n) << std::endl;

    return 0;
}
