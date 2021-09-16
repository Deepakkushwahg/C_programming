#include<stdio.h>
int add(int a, int b)
{
	int sum;
	sum = a+b;
	return sum;
}
void main()
{
	int a, b, c;
	printf("Enter two number: ");
	scanf("%d %d", &a, &b);
	c=add(a,b);
	printf("Sum is %d", c);
}