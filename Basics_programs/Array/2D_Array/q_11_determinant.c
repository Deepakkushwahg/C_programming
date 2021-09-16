#include<stdio.h>
int main()
{
	int a[100][100], n, m, i, j, d;
	n=3;
	m=3;
	printf("Size of matrix = %d*%d\n", n, m);
	printf("Enter the elements\n");
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			scanf("%d", &a[i][j]);
	printf("Your matrix\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	d = a[0][0]*( a[1][1]*a[2][2] - a[1][2]*a[2][1] )-a[0][1]*( a[1][0]*a[2][2] - a[1][2]*a[2][0] )+a[0][2]*( a[1][0]*a[2][1] - a[1][1]*a[2][0] );
	printf("Determinant of your matrix = %d", d);
	return 0;
}