// substract two enter integer values

#include<stdio.h>

void main()
{
        int a, b, sub;
        printf("Enter first value: ");
        scanf("%d", &a);
        printf("Enter second value: ");
        scanf("%d", &b);
        sub = a - b;
        printf("substract of %d and %d is %d", a, b, sub);

}