#include <stdio.h>
#include <stdlib.h>

// The sum of the squares of the first ten natural numbers is,
//     1^2 + 2^2 + ... + 10^2 = 385
// The square of the sum of the first ten natural numbers is,
//     (1 + 2 + ... + 10)^2 = 3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
//     3025 - 385 = 2640
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#define NUM 100

int main(int argc, char const *argv[])
{
    int x = 0, y = 0;
    for (int i = 0; i <= NUM; i++)
    {
        // The sum of the squares
        x+= (i * i);
        // The sum
        y+= i;
    }
    // The square of the sum
    y = y * y;
    // finding difference 
    printf("%d", y - x);
    return 0;
}
