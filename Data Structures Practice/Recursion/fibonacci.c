#include <stdio.h>

int fibonacci(int n)
{
    int num;
    //base case
    if (n == 1)
    {
        return 1;
    }

    else if (n == 2)
    {
        return 1;
    }

    //calling case
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main()
{
    int n; //number of elements in series
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}