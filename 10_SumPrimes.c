#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

// Find the sum of all the primes below two million.

#define ll long long

ll SieveOfEratosthenes(int n);

int main(int argc, char const *argv[])
{
    printf("%lld", SieveOfEratosthenes(2000000));
    return 0;
}

ll SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    ll sum = 0;
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    // Sum all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            sum+=p;
    return sum;
}
