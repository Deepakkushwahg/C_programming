#include<stdio.h>
int main()
{
	int n, c=1, a, b, x;
	printf("Enter the number: ");
	scanf("%d", &n);
	b=n%10;
	x=n;
	while(x>0)
	{
		c=c*10;
		x=x/10;
	}
	c=c/10;
	a=n/c;
	printf("Sum of first and last digit is %d", a+b);
	return 0;
}