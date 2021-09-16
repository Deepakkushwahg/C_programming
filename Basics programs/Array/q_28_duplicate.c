//Q :28
#include<stdio.h>
int main()
{
	int a[1000], n, i, j;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the element\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	for(i=0;i<=n-1;i++)
	{
		j=i+1;
		while(j<=n-1)
		{
			if(a[i]==a[j])
			{
				for(j=j;j<=n-1;j++)
					a[j]=a[j+1];
				n--;
			}
			else
				j++;
		}
	}
	printf("Array after delete all duplicate elements\n");
	for(i=0;i<=n-1;i++)
		printf("%d ", a[i]);
	return 0;
}