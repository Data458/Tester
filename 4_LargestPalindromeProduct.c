#include <stdio.h>

// A palindromic number reads the same both ways. 
// The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

int main(int argc, char const *argv[])
{
    int product;
    int largestPal = 0;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            product = i * j;
            // reversing the product
            int num = product;
            int reverse = 0;
            while (num > 0)
            {
                int mod = num % 10;
                reverse = reverse * 10 + mod;
                num = num / 10;
            }
            // comparing to see if palindrome
            if (reverse == product)
            {
                int palindrome = product;
                // testing if largest
                if (palindrome > largestPal)
                {
                    largestPal = palindrome;
                }
            }
        }
    }
    printf("%d", largestPal);
    return 0;
}
