#include<stdio.h>

void main()
{
    int a, b;
    printf("Enter values for a and b: ");
    scanf("%d %d", &a, &b);
    printf("\n The < value of a is %d", a<b);
    printf("\n The <= value of a is %d", a<=b);
    printf("\n The > value of a is %d", a>b);
    printf("\n The >= value of a is %d", a>=b);
    printf("\n The == value of a is %d", a==b);
    printf("\n The != value of a is %d", a!=b);

}