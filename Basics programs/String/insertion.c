#include<stdio.h>
int main()
{
	int a[100], n, i, *p=a, *pn=&n, x, *px=&x, k, *pk=&k, j;
	printf("Enter the size of array: ");
	scanf("%d", pn);
	printf("Enter the elements\n");
	for(i=0;i<=*pn-1;i++)
		scanf("%d", p+i);
	printf("Enter the number which insert in array and position: ");
	scanf("%d %d", px, pk);
	for(i=0;i<=*pn-1;i++)
	{
		if(i==*pk-1)
		{
			for(j=*pn-1;j>=i;j--)
				p[j+1]=p[j];
			p[i]=*px;
		}
	}
	*pn=*pn+1;
	printf("Array after insertion\n");
	for(i=0;i<=*pn-1;i++)
		printf("%d ", *(p+i));
	return 0;
}