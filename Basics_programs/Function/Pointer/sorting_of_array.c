#include<stdio.h>
void sort(int *a, int n)
{
	int i, j, t;
	for(i=1;i<=n-1;i++)
		for(j=0;j<=n-1-i;j++)
			if(*(a+j)>*(a+j+1))
			{
				t=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=t;
			}
}
void main()
{
	int a[100], n, i;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	sort(a,n);
	printf("Array after sorting\n");
	for(i=0;i<=n-1;i++)
		printf("%d ", a[i]);
}