#include <stdio.h>
#include <stdlib.h>

// The four adjacent digits in the 1000-digit number (BigNum.txt) that have the greatest product are 9 × 9 × 8 × 9 = 5832.
//
// Find the thirteen adjacent digits in the 1000-digit number (BigNum.txt) that have the greatest product. What is the value of this product?

#define ll long long

int main(int argc, char const *argv[])
{
    FILE *filePtr;
    filePtr = fopen("8_BigNum.txt", "r");
    int runArr[13], masterArr[13];
    int digit, i = 0;
    ll lrgProd = 1;
    if (filePtr == NULL) {
        printf("Unable to open file!");
        exit(1);
    }
    for (i; i < 13; i++) {
        fscanf(filePtr, "%1d", &digit);
        runArr[i] = digit;
        lrgProd*=runArr[i];
        masterArr[i] = runArr[i];
    }
    for (i; i <= 1000; i++) {
        ll product = 1;
        fscanf(filePtr, "%1d", &digit);
        digit == 0 ? i+=12 : i; 
        for (int j = 0; j < 13; j++) 
            runArr[j] = runArr[j + 1];
        runArr[12] = digit;
        for (int j = 0; j < 13; j++) 
            product*=runArr[j];
        product > lrgProd ? lrgProd = product : lrgProd;
    }
    printf("%lld", lrgProd);
    fclose(filePtr);
    return 0;
}
