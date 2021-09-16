//Q : 19
#include<stdio.h>
int main()
{
	int a[1000], n, i, pos;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the element\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	printf("Enter the position: ");
	scanf("%d", &pos);
	printf("Deleted element is %d\n", a[pos-1]);
	for(i=pos-1;i<=n-1;i++)
		a[i]=a[i+1];
	n=n-1;
	printf("Array after deletion\n");
	for(i=0;i<=n-1;i++)
	printf("%d ", a[i]);
	return 0;

}