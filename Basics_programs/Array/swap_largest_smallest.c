//Q :11
#include<stdio.h>
int main()
{
	int a[1000], n, i, l, j, s, k, t;
	printf("Enter no. of element: ");
	scanf("%d", &n);
	printf("Enter the element\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d", &a[i]);
		l=a[0];
		s=a[0];
	}
	for(i=1;i<=n-1;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
			j=i;
		}
	}
	for(i=1;i<=n-1;i++)
	{
		if(a[i]<s)
		{
			s=a[i];
			k=i;
		}
	}
	t=a[j];
	a[j]=a[k];
	a[k]=t;
	printf("Updated array\n");
	for(i=0;i<=n-1;i++)
	printf("%d ", a[i]);
	return 0;
}
	