// multiply two entered integer values

#include<stdio.h>

void main()
{
        int a, b, multi;
        printf("Enter first value: ");
        scanf("%d", &a);
        printf("Enter second value: ");
        scanf("%d", &b);
        multi = a * b;
        printf("multiply of %d and %d is %d", a, b, multi);

}