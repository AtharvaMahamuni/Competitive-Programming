#include <stdio.h>

int factorial(int n)
{
    //base case
    if (n == 0 || n == 1)
        return 1;
    //calling case
    else
        return (n * factorial(n - 1));
}

int main()
{
    int n;
    scanf("%d", &n);
    int ans = factorial(n);
    printf("%d", ans);

    return 0;
}