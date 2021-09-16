//Q :4
#include<stdio.h>
int main()
{
	int a[1000], n, i, z=0, neg=0, p=0;
	printf("Enter the size of array upto 1000 : ");
	scanf("%d", &n);
	for(i=0;i<=n-1;i++)
	scanf("%d", &a[i]);
	for(i=0;i<=n-1;i++)
	{
	      if(a[i]==0)
	      z = z+1;
	      else if(a[i]<0)	
	      neg = neg+1;
      	      else 
	      p = p+1;
	}
	printf("Total no. of positive value is %d\n", p);
	printf("Total no. of negative value is %d\n", neg);
	printf("Total no. of zero is %d\n", z);
	
	return 0;

}