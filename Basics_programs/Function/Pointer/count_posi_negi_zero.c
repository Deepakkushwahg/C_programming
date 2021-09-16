#include<stdio.h>
int main()
{
	int a[100], n, i, *p=a, *pn=&n, c1=0, c2=0, c3=0;
	printf("Enter the size of array: ");
	scanf("%d", pn);
	printf("Enter the elements\n");
	for(i=0;i<=*pn-1;i++)
	{
		scanf("%d", p+i);
		if(*(p+i)==0)
			c1++;
		else if(*(p+i)>0)
			c2++;
		else
			c3++;
	}
	printf("Total no. of positive = %d\n", c2);
	printf("Total no. of negetive = %d\n", c3);
	printf("Total no. of zero = %d", c1);
	return 0;
}