//Link: https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.

    n = (n % 10) + ((n % 100) / 10) + ((n % 1000) / 100) + ((n % 10000) / 1000) + (n / 10000);

    printf("%d", n);

    return 0;
}