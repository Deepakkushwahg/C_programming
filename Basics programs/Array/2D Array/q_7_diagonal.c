#include<stdio.h>
int main()
{
	int a[100][100], n, m, i, j;
	printf("Enter size of row and column: ");
	scanf("%d %d", &n, &m);
	if(n==m)
	{
		printf("Enter the elements\n");
		for(i=0;i<=n-1;i++)
			for(j=0;j<=m-1;j++)
				scanf("%d", &a[i][j]);
		printf("Diagonal in matrix form\n");
		for(i=0;i<=n-1;i++)
		{
			for(j=0;j<=m-1;j++)
			{
				if(i==j)
					printf("%d ", a[i][j]);
				printf("  ");
			}
			printf("\n");
		}
	}
	else
		printf("Size of order must be same");
	return 0;
}