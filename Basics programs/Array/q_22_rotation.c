//Q : 22
#include<stdio.h>
int main()
{
	int a[1000], n, i, x, r, c=0;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	printf("how many times rotate: ");
	scanf("%d", &r);
	do
	{
		x=a[0];
		for(i=0;i<=n-1;i++)
			a[i]=a[i+1];
		a[n-1]=x;
		c=c+1;
	}
	while(c<r);
	printf("Final array\n");
	for(i=0;i<=n-1;i++)
	printf("%d ", a[i]);
	return 0;
}