#include<stdio.h>
int main()
{
	int a[100][100], n, m, i, j, c=0,d=0;
	printf("Enter no. of rows: ");
	scanf("%d", &n);
	printf("Enter no. of column: ");
	scanf("%d", &m);
	printf("Write the matrix\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		scanf("%d", &a[i][j]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			if(a[i][j]==0)
			c=c+1;
			else
			d=d+1;
		}
	}
	if(c==d)
		printf("Matrix is neither sparse nor dense");
	else if(c<d)
		printf("Matrix is Dense");
	else
		printf("Matrix is sparse");
	return 0;

}