#include <iostream>

int sum_of_naturals(int n)
{
    int result = 0;

    for(int i = 0; i < n; ++i)
    {
        if( (i % 3 == 0) || (i % 5 == 0) )
        {
            result += i;
        }
    }

    return result;
}


int main() 
{
    int n = 0;
    std::cout << "Enter a number:";
    std::cin >> n;

    std::cout << "Sum is " << sum_of_naturals(n) << std::endl;

    return 0;
}
