// find the factorial of the number 

#include<stdio.h>

void main()
{
	int a, i, num;
	printf("Enter the number: ");
	scanf("%d", &num);
	i = 1;
	a = 1;
	for ( num>0;i<=num;i++)
	a = a * i;
	printf("Factorial of %d is %d", num, a);

}