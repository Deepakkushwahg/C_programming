//Q : 12
#include<stdio.h>
int main()
{
	int a[1000], n, i, j, t; 
	printf("Enter the total no. of element: ");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<=n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	printf("Second largest no. = %d\n", a[n-2]);
	printf("Second smallest no. = %d", a[1]);
	return 0;
}