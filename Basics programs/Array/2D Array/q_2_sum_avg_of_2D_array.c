#include<stdio.h>
int main()
{
	int a[1000][1000], n, m, i, j, s=0, avg;
	printf("Enter the no. of array and no. of array element: ");
	scanf("%d %d", &n, &m);
	printf("Enter the array element\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			scanf("%d", &a[i][j]);
			s=s+a[i][j];
		}
	}
	avg = s/(n*m);
	printf("Sum = %d and Average = %d", s, avg);
	return 0;

}