#include<stdio.h>
int main()
{
	int n, i, j;
	printf("Enter the size: ");
	scanf("%d", &n);
	if(n>4)
	{
		for(i=1;i<=n;i++)
		{
			printf("*");
			if(i==1|| i==n)
				for(j=1;j<=n/2;j++)
					printf(" *");
			else if(n%2==0 && i==n/2)
				for(j=1;j<=n/2;j++)
					printf(" *");
			else if(n%2!=0 && i==n/2+1)
				for(j=1;j<=n/2;j++)
					printf(" *");
			printf("\n");
		}
	}
	else
		printf("Please enter the size above 4");
	return 0;
}