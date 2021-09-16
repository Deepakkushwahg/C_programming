//Q : 20
#include<stdio.h>
int main()
{
	int a[1000], n, i, ele, j;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the array element\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	printf("Enter the number which you want to delete: ");
	scanf("%d", &ele);
	for(i=0;i<=n-1;i++)
	{
		if(a[i]==ele)
		{
			for(j=i;j<=n-1;j++)
				a[j]=a[j+1];
			break;
		}
	}
	n=n-1;
	printf("Array element after deletion\n");
	for(i=0;i<=n-1;i++)
	printf("%d ", a[i]);
	return 0;
}