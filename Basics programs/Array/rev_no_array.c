// Q : 2
#include<stdio.h>
int main()
{
	int a[1000], n, i;
	printf("Enter the size of array upto 1000 : ");
	scanf("%d", &n);
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	for(i=n-1;i>=0;i--)
		printf("%d ", a[i]);
	return 0;
}