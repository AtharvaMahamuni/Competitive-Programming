//Link: https://www.hackerrank.com/challenges/functions-in-c/problem

#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int n1,int n2, int n3, int n4)
{
    int max;
    
    if(n1>=n2&&n1>=n3&&n1>n4)
        max = n1;
    else if(n2>=n1&&n2>=n3&&n2>n4)
        max = n2;
    else if(n3>=n1&&n3>=n2&&n3>n4)
        max = n3;
    else 
        max = n4;

    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
