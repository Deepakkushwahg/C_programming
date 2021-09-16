#include<stdio.h>
int main()
{
	int a[1000], n, i, j, *p=a, *pn=&n, l, *pl=&l;
	printf("Enter no. of element: ");
	scanf("%d", pn);
	printf("Enter the element\n");
	for(i=0;i<=*pn-1;i++)
	scanf("%d", p+i);
	*pl=p[0];
	for(i=0;i<=*pn-1;i++)
	{
		if(p[i]>*pl)
		{
			*pl=p[i];
			j=i;
		}
	}
	printf("Position of largest element is %d",  j+1);
	return 0;
}