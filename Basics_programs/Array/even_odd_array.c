//Q :5					
#include<stdio.h>
int main()
{
	int a[1000], n, i, j=0, k=0,E[20],O[20];
	printf("Enter the size of array upto 1000 : ");
	scanf("%d", &n);
	printf("Enter the elements : ");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]%2==0)
		{
			E[j]=a[i];
			j++;
		}
		else
		{
			O[k]=a[i];
			k++;
		}
	}
	printf("Even array\n");
	for(i=0;i<=j;i++)
		printf("%d\n",E[i]);
	printf("Odd array\n");
	for(i=0;i<=k;i++)
		printf("%d\n",O[i]);
	
	return 0;
}