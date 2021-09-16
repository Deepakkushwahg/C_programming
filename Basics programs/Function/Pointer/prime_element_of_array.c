#include<stdio.h>
int main()
{
	int a[1000], n, i, j, *p=a, *pn=&n, *pj=&j;
	printf("Enter no. of element: ");
	scanf("%d", pn);
	printf("Enter the elements\n");
	for(i=0;i<=*pn-1;i++)
		scanf("%d", p+i);
	for(i=0;i<=*pn-1;i++)
	{
		for(*pj= 2; p[i]>*pj; (*pj)++)
			if (p[i]%*pj==0)
    				break;
		if(*pj==p[i] || p[i]==1)
			printf("%d is prime\n", p[i]);
		else
			printf("%d is not prime\n", p[i]);
	}
	return 0;
}
