//Q : 25
#include<stdio.h>
int main()
{
	int a[1000], n, i, x, c=0, j;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	for(i=0;i<=n-1;i++)
	{
		x=a[i];
		for(j=0;j<=n-1;j++)
		{
			if(a[j]==x)
				c=c+1;
		}
		printf("Frequency of element of position no. %d is %d\n", i+1, c);
		c=0;
	}
	return 0;
}