#include<stdio.h>
int main()
{
	int n, i, j, k;
	printf("Enter the size: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("*");
		for(j=i;j<=n;j++)
			printf("  ");
		printf("*\n");
	}
	for(i=1;i<=n;i++)
	{
		printf("*");
		for(k=1;k<=i;k++)
			printf("  ");
		printf("*\n");
	}
	return 0;
}