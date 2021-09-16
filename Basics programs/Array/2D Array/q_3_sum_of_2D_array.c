#include<stdio.h>

int main()
{
	int a[1000][1000], n, m, i, j, s=0;
	printf("Enter the no. of array and no. of array element: ");
	scanf("%d %d", &n, &m);
	printf("Enter the array element\n");
	for(i=0;i<=n-1;i++)
	{
	    for(j=0;j<=m-1;j++)
	    scanf("%d", &a[i][j]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
			s=s+a[i][j];
		printf("Sum of row %d = %d\n", i+1, s);
		s=0;
	}
	for(j=0;j<=m-1;j++)
	{
		s=0;
		for(i=0;i<=n-1;i++)
		s=s+a[i][j];
		printf("sum of column %d = %d\n", j+1, s);
	}
	return 0;
}	