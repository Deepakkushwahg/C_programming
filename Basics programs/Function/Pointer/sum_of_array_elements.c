#include<stdio.h>
int main()
{
	int a[100], n, i, *p=a, s=0;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d", p+i);
		s=s+*(p+i);
	}
	printf("Array elements are\n");
	for(i=0;i<=n-1;i++)
		printf("%d ", *(p+i));
	printf("\nSum of array elements is %d", s);
	return 0;
}