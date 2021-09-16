#include<stdio.h>
int power(int x, int n)
{
	int i;
	i=x;
	while(n-1!=0)
	{
		x=x*i;
		n--;
	}
	return x;
}
void main()
{
	int x, n, t;
	printf("Enter the no. whose power to be calculate: ");
	scanf("%d", &x);
	printf("Enter the power: ");
	scanf("%d", &n);
	t=power(x,n);
	printf("%d^%d is = %d", x, n, t);
}