//Q : 3
#include<stdio.h>
int main()
{
	int a[1000], n, i, sum=0, avg;
	printf("Enter the size of array upto 1000 : ");
	scanf("%d", &n);
	for(i=0;i<=n-1;i++)
	scanf("%d", &a[i]);
	for(i=0;i<=n-1;i++)
	sum = sum+a[i];
	printf("Sum of elements is %d\n", sum);
	avg = sum/n;
	printf("Average of elements is %d", avg);

	return 0;
}

