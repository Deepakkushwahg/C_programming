#include<stdio.h>
int main()
{
	int a, b, c, *pa=&a, *pb=&b, *pc=&c;
	printf("Enter two numbers: ");
	scanf("%d %d", pa, pb);
	*pc=*pa+*pb;
	printf("Sum of number %d and %d is %d", *pa, *pb, *pc);
	return 0;
}