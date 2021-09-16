#include<stdio.h>
int main()
{
	int a[100][100], n, m, i, j;
	printf("Enter the size of row and column: ");
	scanf("%d %d", &n, &m);
	printf("Enter the elements\n");
	for(i=0;i<=n-1;i++)
		for(j=0;j<=m-1;j++)
			scanf("%d", &a[i][j]);
	printf("Boundary elements are\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			if(i==0 || i==n-1 || j==0 || j==m-1)
				printf("%d\t", a[i][j]);
			else
				printf("\t");
		}
		printf("\n\n");
	}
	return 0;
}