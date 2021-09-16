#include<stdio.h>

void main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    a ^= b;
    printf("value of a is %d", a);

}