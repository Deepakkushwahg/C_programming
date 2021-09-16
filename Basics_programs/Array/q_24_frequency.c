//Q : 24
#include<stdio.h>
int main()
{
	int a[1000], n, i, ele, c=0;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	printf("Enter the element whose frequency is find: ");
	scanf("%d", &ele);
	for(i=0;i<=n-1;i++)
		if(a[i]==ele)
			c=c+1;
	printf("Frequency of %d is %d", ele, c);
	return 0;
}