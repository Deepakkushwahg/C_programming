//Q :9
#include<stdio.h>
int main()
{
	int a[1000], n, i, j, t;
	printf("Enter no. of element: ");
	scanf("%d", &n);
	printf("Enter the element\n");
	for(i=0;i<=n-1;i++)
	scanf("%d", &a[i]);
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1-i;j++)
		if(a[j]>a[j+1])
		{
			t = a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	printf("Largest no. is = %d", a[n-1]);
	return 0;
}