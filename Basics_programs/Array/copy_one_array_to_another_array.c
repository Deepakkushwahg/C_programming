#include<stdio.h>
int main()
{
	int n, a[100], i, b[100];
	printf("Enter the size of 1st array: ");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d", &a[i]);
		b[i]=a[i];
	}
	printf("Another array is\n");
	for(i=0;i<=n-1;i++)
		printf("%d ", b[i]);
	return 0;
}