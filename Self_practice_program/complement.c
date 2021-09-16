// find the binary number of the decimal number 

#include<stdio.h>

void main()
{
    int a, c;
    printf("Enter the number: ");
    scanf("%d", &a);
    c = ~a;
    printf("Complement of %d is %d", a, c);
    
}