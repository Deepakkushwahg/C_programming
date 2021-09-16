#include<stdio.h>
int main()
{
	int n, i, j;
	printf("Enter the size: ");
	scanf("%d", &n); 
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
	if(n%2==0)
		for(i=1;i<n;i++)
			printf("*\n");
	else
		for(i=1;i<n-1;i++)
			printf("*\n");
	return 0;
}