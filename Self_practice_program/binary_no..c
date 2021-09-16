// find the binary number of the decimal number 

#include<stdio.h>

void main()
{
    int a, r, binary=0, i=1;
    printf("Enter the number: ");
    scanf("%d", &a);
    while(a!=0)
    {
        r = a%2;
        a = a/2;
        binary = binary+(r*i);
        i = i*10;
    }
    printf("binary number is %d\n", binary);
    
}