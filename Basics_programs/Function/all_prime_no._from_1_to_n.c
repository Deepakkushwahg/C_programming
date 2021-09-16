#include<stdio.h>
void sieve(int n)
{
	int i, x, c;
	for(x=1;x<=n;x++)
	{
		c=0;
		for(i=2;i<x;i++)
		        if(x%i==0)
		        {
			c=1;
			break;
		        }
		if(c==0)
		      printf("%d ", x);
	}
}

int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	sieve(n);
	return 0;
}