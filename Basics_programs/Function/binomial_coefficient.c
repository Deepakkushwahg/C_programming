#include<stdio.h>
int fact(int n)
{
	int i=1;
	while(n>0)
	{
		i=i*n;
		n--;
	}
	return i;
}
void main()
{
	int n, r, bino;
	printf("Enter n and r of binomial co-efficient: ");
	scanf("%d %d", &n, &r);
	if(n<r)
		printf("Invalid type");
	else
	{
		bino=fact(n)/(fact(r)*fact(n-r));
		printf("Binomial coefficient = %d", bino);
	}
}
