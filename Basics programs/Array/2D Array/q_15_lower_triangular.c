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
		printf("Your matix\n");
		for(i=0;i<=n-1;i++)
		{
			for(j=0;j<=m-1;j++)
				printf("%d ", a[i][j]);
			printf("\n");
		}
		printf("Lower triangular matrix is\n");
		for(i=0;i<=n-1;i++)
		{
			for(j=0;j<=i;j++)
				printf("%d ", a[i][j]);
			printf("\n");
		}
	}
	else
		printf("For triangular matrix size of row and column must be same");
	return 0;
}