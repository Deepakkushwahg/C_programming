#include<stdio.h>
int main()
{
	int n, i, j, k=0;
	printf("Enter the size: ");
	scanf("%d", &n);
	while(k<2)
	{ 
		for(i=1;i<=n/2;i++)
		{
			printf("*");
			for(j=2;j<=i+1;j++)
				printf("  ");
			printf("*\n");
		}
		for(i=1;i<=n/2;i++)
		{
			printf("*");
			for(j=i;j<=n/2;j++)
				printf("  ");
			printf("*\n");
		}
		k++;
	}
	return 0;
}