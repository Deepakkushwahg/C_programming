#include<stdio.h>
int main()
{
	int a[1000], n, i, f, *p=a, *pn=&n, *pf=&f;
	printf("Enter the size of array: ");
	scanf("%d", pn);
	printf("Enter the elements\n");
	for(i=0;i<=*pn-1;i++)
		scanf("%d", p+i);
	printf("Enter the finding number: ");
	scanf("%d", pf);
	for(i=0;i<=*pn-1;i++)
	{
		if(p[i]==*pf)
		{
			printf("The position of %d in array is %d\n", p[i], i+1);
			break;
		}
	}
	if(i==*pn)
	printf("Number is not found");
	return 0;
}
