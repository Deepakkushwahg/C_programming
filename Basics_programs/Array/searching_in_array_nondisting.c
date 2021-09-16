//Q : 14
#include<stdio.h>
int main()
{
	int a[1000], n, i, f=0, s;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	printf("Enter the finding number: ");
	scanf("%d", &s);
	for(i=0;i<=n-1;i++)
	{
		if(a[i]==s)
		{
			printf("The position of finding number in array is %d\n", i+1);
			f=1;
		}
	}
	if(f==0)
	printf("Element not found");
	return 0;
}