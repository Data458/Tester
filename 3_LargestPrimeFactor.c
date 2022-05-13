#include <stdio.h>
#include <math.h>

// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

int main(int argc, char const *argv[])
{
    long long n;
    n = 600851475143;
    long long div = 2, maxFact;
    while (n != 0)
    {
        if (n % div != 0)
            div = div + 1; 
        else
        {
            maxFact = n;
            n = n / div;
            if (n == 1)
            {
                printf("%d", maxFact);
                break;
            }
        }
    }
    return 0;
}
