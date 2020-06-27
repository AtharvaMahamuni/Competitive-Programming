//Link: https://www.hackerrank.com/challenges/playing-with-characters/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    char ch; //use this code
    char s[100];
    char s1[122];
    scanf("%c%*c", &ch);
    scanf("%s%*c", &s);
    scanf("%[^\n]%*c", &s1);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", s1);
    return 0;
}
