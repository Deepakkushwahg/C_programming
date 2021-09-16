//Q : 17
#include<stdio.h>
int main()
{
	int a[1000], n, i, pos, ele;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the element\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	printf("Enter the number and position: ");
	scanf("%d %d", &ele, &pos);
	for(i=n-1;i>=pos-1;i--)
		a[i+1]=a[i];
	a[pos-1]=ele;
	n=n+1;
	printf("Array element after insertion\n");
	for(i=0;i<=n-1;i++)
		printf("%d ", a[i]);
	return 0;

}