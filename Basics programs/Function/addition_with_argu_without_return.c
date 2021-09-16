#include<stdio.h>
void add(int a, int b)
{
	int sum;
	sum = a+b;
	printf("Sum is %d", sum);
}
void main()
{
	int a, b, c;
	printf("Enter two number: ");
	scanf("%d %d", &a, &b);
	add(a,b);
	
}