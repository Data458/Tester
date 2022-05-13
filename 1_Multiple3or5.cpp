#include <iostream>
using namespace std;

// NEW COMMENT
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
// The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

int main(int argc, char const *argv[])
{
    int x = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            x = x + i;
    }
    cout << x << endl;
    return 0;
}
