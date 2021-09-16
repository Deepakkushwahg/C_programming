#include<stdio.h>
int add()
{
	int a, b, sum;
	printf("Enter two number: ");
	scanf("%d %d", &a, &b);
	sum = a+b;
	printf("Sum is %d", sum);
}
void main()
{
	add();
}