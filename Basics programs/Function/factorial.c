#include<stdio.h>
int factrec(int n)
{
	int i=1;
	while(n>0)
	{
		i=i*n;
		n--;
	}
	return i;
}
void main()
{
	int n, f;
	printf("Enter the number whose factorial you want: ");
	scanf("%d", &n);
	f=factrec(n);
	printf("Factorial of the number is %d", f);
}