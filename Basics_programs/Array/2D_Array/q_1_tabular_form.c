// Element in tabular form
#include<stdio.h>
int main()
{
	int a[100][100], n, m, i, j;
	printf("Enter the size of row and column: ");
	scanf("%d %d", &n, &m);
	printf("Enter the array element\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		scanf("%d", &a[i][j]);
	}
	printf("Array is\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;

}