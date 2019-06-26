#include "chapter1_3.h"
#include "chapter1_2.h"

int least_common_multiple( int a, int b )
{
    return (a*b)/gcd(a, b);
}