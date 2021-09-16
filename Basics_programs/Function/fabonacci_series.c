#include<stdio.h>
void fabo(int n)
{
	int a=0, b=1, c;
	printf("Fabonaci series is\n");
	printf("%d ", a);
	while(n-1>0)
	{
		c=a;
		a=a+b;
		b=c;
		printf("%d ", a);
		n--;	
	}	
}
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	fabo(n);
}