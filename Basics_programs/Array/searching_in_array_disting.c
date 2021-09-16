//Q : 13
#include<stdio.h>
int main()
{
	int a[1000], n, i, f;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	printf("Enter the finding number: ");
	scanf("%d", &f);
	for(i=0;i<=n-1;i++)
	{
		if(a[i]==f)
		{
			printf("The position of %d in array is %d\n", f, i+1);
			break;
		}
	}
	if(i==n)
	printf("Number is not found");
	return 0;
}
