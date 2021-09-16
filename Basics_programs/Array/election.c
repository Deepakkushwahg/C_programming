//Q : 7
#include<stdio.h>
int main()
{
	int a[10], b[10], i, st=0, sb=0;
	printf("Enter the votes of Trump in 10 states of US\n");
	for(i=0;i<10;i++)
		scanf("%d", &a[i]);
	printf("Enter the votes of Biden in 10 states of US\n");
	for(i=0;i<10;i++)
		scanf("%d", &b[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]>b[i])
			printf("Winner in %d state is Trump\n", i+1);
		if(a[i]<b[i])
			printf("Winner in %d state is Biden\n", i+1);
	}
	for(i=0;i<10;i++)
	{
		st=st+a[i];
		sb=sb+b[i];
	}
	if(st>sb)
		printf("\nOverall winner is Trump");
	if(st<sb)
		printf("\nOverall winner is Biden");
	return 0;
}
