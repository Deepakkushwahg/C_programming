#include<stdio.h>
void fact()
{
	int i=1, n;
	printf("Enter the number whose factorial you want: ");
	scanf("%d", &n);
	while(n>0)
	{
		i=i*n;
		n--;
	}
	printf("Factorial of the number is %d", i);
}
void main()
{
	fact();
}