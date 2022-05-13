#include <stdio.h>

// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#define ulong unsigned long

int main(void)
{
    const ulong val = 20;
    ulong x;
    ulong y;
    for (x = val;; x += val)
    {
        for (y = val - 1; y; y--)
        {
            if (x % y != 0)
            {
                break;
            }
        }
        if (y == 0)
        {
            printf("%u", x);
            break;
        }
    }
    return 0;
}