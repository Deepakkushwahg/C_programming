#include<stdio.h>
int fact()
{
	int i=1, n;
	printf("Enter the number whose factorial you want: ");
	scanf("%d", &n);
	while(n>0)
	{
		i=i*n;
		n--;
	}
	return i;
}
void main()
{
	int f;
	f=fact();
	printf("Factorial of the number is %d", f);
}