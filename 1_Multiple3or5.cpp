#include <iostream>

// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
// The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

int main(int argc, char const *argv[])
{
    int x = 0;
    for (const auto &num : 1000)
    {
        if (num % 3 == 0 || num % 5 == 0)
            x = x + num;
    }
    cout << x << endl;
    return 0;
}
