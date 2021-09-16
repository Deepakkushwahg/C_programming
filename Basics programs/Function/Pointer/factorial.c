#include<stdio.h>
int main()
{
	int n, i=1, *pn=&n, *pi=&i;
	printf("Enter the number: ");
	scanf("%d", pn);
	printf("Factorial of %d = ", *pn);
	while(n>0)
	{
		*pi=*pi**pn;
		(*pn)--;
	}
	printf("%d", *pi);
	return 0;
}