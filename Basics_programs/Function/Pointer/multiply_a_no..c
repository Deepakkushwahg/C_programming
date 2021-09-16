#include<stdio.h>
void multiply(int *n)
{
	*n=*n*10;
	printf("Multiply is %d\n", *n);
}
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	multiply(&n);
	printf("Number after calling function is %d", n);
}