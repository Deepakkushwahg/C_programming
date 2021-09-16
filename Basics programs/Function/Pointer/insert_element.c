#include<stdio.h>
void insert(int *p, int n, int x, int k)
{
	int i, j;
	for(i=0;i<=n-1;i++)
	{
		if(i==k-1)
		{
			for(j=n-1;j>=i;j--)
				p[j+1]=p[j];
			p[i]=x;
		}
	}
	n++;
	printf("Array after insertion\n");
	for(i=0;i<=n-1;i++)
		printf("%d ", *(p+i));
}
void main()
{
	int a[100], n, i, x, k;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	printf("Enter the number which insert in array and position: ");
	scanf("%d %d", &x, &k);
	insert(a,n,x,k);
}
