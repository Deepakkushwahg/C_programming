#include<stdio.h>
int main()
{
	int a[100][100], n, m, i, j, k;
	printf("Enter the size of row and column: ");
	scanf("%d %d", &n, &m);
	printf("Enter the elements\n");
	for(i=0;i<=n-1;i++)
		for(j=0;j<=m-1;j++)
			scanf("%d", &a[i][j]);
	printf("Your matrix\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	printf("Matrix after zig zack\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			if(i%2!=0)
			{
				for(k=m-1;k>=0;k--)
					printf("%d ", a[i][k]);
				break;
			}
			else
				printf("%d ", a[i][j]);
		}
		printf("\n");

	}
	return 0;
}