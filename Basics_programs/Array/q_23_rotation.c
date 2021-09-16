//Q : 23
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
		x=a[n-1];
		for(i=n-1;i>=0;i--)
			a[i]=a[i-1];
		a[0]=x;
		c=c+1;
	}
	while(c<r);
	printf("Final array\n");
	for(i=0;i<=n-1;i++)
	printf("%d ", a[i]);
	return 0;
}
