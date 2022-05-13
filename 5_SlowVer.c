#include <stdio.h>
#include <stdbool.h>

// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

int main(int argc, char const *argv[])
{
    int num = 1;
    while (true)
    {
        int count = 0;
        for (int i = 1; i <= 20; i++)
        {
            if (num%i == 0)
            {
                count++;
            }
        }
        if (count == 20)
        {
            printf("%d", num);
            break;
        }
        num++;
    }
    return 0;
}
