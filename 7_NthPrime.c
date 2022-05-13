#include <stdio.h>
#include <stdbool.h>

// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

// What is the 10 001st prime number?

int main(int argc, char const *argv[])
{
    // position of prime you want to find
    int numPrime = 10001;
    for (int i = 2;; i++) {
        bool isPrime = true;
        if (i != 2 && i%2==0)
            isPrime = false;
        for (int j = 2; j < i; j++)
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        if (isPrime)
            numPrime--;
        if (numPrime == 0) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
