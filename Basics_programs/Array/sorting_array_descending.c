//Q : 16
#include<stdio.h>
int main()
{
	int a[1000], n, i, t, j;
	printf("Enter the size of array: ");
	scanf("%d", &n);	
	printf("Enter the elements\n");
	for(i=0;i<=n-1;i++)
	scanf("%d", &a[i]);
	for(i=0;i<=n-1;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(a[j]>a[j-1])
			{
				t = a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}
	printf("Array after sorting in descending order\n");
	for(i=0;i<=n-1;i++)
	printf("%d ", a[i]);
	return 0;
}
