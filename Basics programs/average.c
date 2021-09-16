/* 
Average of three number
enter by the user at run time
*/

#include<stdio.h>

void main()
{
       int a, b, c, average;
       printf("Enter first number: ");
       scanf("%d", &a);
       printf("Enter second number: ");
       scanf("%d", &b);
       printf("Enter third number: ");
       scanf("%d", &c);
       average=(a+b+c)/3;
       printf("average of %d and %d and %d is %d", a, b, c, average);
}
    
