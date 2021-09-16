#include<stdio.h>
int add()
{
	int a, b, sum;
	printf("Enter two number: ");
	scanf("%d %d", &a, &b);
	sum = a+b;
	return sum;
}
void main()
{
	int  c;
	c=add();
	printf("Sum is %d", c);
}