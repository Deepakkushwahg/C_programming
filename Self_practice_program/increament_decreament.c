// increment and decrement number

#include<stdio.h>

void main()
{
    int a, c;
    a = 5;
    c = --a + a++ + ++a;
    printf("value of a is %d and c is %d", a, c);

}