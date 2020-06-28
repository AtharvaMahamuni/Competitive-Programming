//Link: https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k)
{
    //Write your code here.
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;

    for (int a = 1; a < n; a++)
    {
        for (int b = a + 1; b <= n; b++)
        {
            //printf("%d %d\n",a,b);
            if ((a & b) < k && (a & b) > maxAnd)
                maxAnd = a & b;
            if ((a | b) < k && (a | b) > maxOr)
                maxOr = a | b;
            if ((a ^ b) < k && (a ^ b) > maxXor)
                maxXor = a ^ b;
        }
    }
    printf("%d\n%d\n%d", maxAnd, maxOr, maxXor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}