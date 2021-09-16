#include<stdio.h>
void fact(int n)
{
	int i=1;
	while(n>0)
	{
		i=i*n;
		n--;
	}
	printf("Factorial of the number is %d", i);
}
void main()
{
	int n;
	printf("Enter the number whose factorial you want: ");
	scanf("%d", &n);
	fact(n);
}