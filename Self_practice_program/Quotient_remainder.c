// program to compute quotient and remainder

#include<stdio.h>

void main()
{
int a, b, q, r;
scanf("%d", &a);
scanf("%d", &b);
q = a / b;
r = a % b;
printf("Quotient is %d and Remainder is %d", q, r);

}