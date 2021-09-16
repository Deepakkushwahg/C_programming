#include<stdio.h>
int main()
{
	int n, i, j, k;
	printf("Enter the size: ");
	scanf("%d", &n);
	for(i=0;i<=n;i++)
	{
		for(j=i;j<=n;j++)
			printf(" ");
		printf("*");
		for(k=0;k<=i-1;k++)
			printf(" ");
		for(k=0;k<=i-1;k++)
			printf(" ");
		printf("\b*");
		for(j=i;j<=n-1;j++)
			printf(" ");
		for(j=i;j<=n-1;j++)
			printf(" ");
		printf("\b*");
		for(k=0;k<=i-1;k++)
			printf(" ");
		for(k=0;k<=i-1;k++)
			printf(" ");
		printf("\b*\n");	
	}
	return 0;
}