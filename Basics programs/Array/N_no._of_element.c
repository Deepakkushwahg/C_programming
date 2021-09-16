//Q : 1
#include<stdio.h>
int main()
{
	int a[1000], n, i;
	printf("Enter the size of array up to limit 1000\n");
	scanf("%d", &n);
	printf("Enter %d Element", n);
	for(i=0;i<=n-1;i++)
	    scanf("%d", &a[i]);
	printf("Array element are\n");
	for(i=0;i<=n-1;i++)
	    printf("%d\n",a[i]);
	return 0;
}

