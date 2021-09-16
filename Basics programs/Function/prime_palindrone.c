#include<stdio.h>
int prime(int n)
{
	int i=2, k=0, r, x;
	n=n+1;
	do
	{
		for(i=2;n>i;i++)
			if(n%i==0)
				break;
		if(i==n)
		{
			for(k=0;n>0;n=n/10)
			{
				r=n%10;
				k=k*10+r;
			}
			if(k==n)
			{
				x=n;
				break;
			}	
		}
		n++;
	}
	while(i!=n && k!=n);
	return x;
}
void main()
{
	int n, x;
	printf("Enter the number: ");
	scanf("%d", &n);
	x=prime(n);
	printf("The next number is %d which  is prime and palindrone", x);
}