#include<stdio.h>
int main()
{
	int a=5, *p=&a;
	printf("address of a = ");
	printf("%u\n", p);
	int b=7, *q=&b;
	printf("address of b = ");
	printf("%u\n", q);
	printf("%d\n", q-p);
	printf("%d", p-q);
	return 0;
}