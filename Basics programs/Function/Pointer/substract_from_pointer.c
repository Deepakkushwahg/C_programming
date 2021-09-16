#include<stdio.h>
int main()
{
	int a=5, *p=&a;
	printf("Before substract\n");
	printf("%u\n", p);
	p=p-1;
	printf("After substract\n");
	printf("%u\n", p);
	double d=7.2, *q=&d;
	printf("Before substract\n");
	printf("%u\n", q);
	q=q-1;
	printf("After substract\n");
	printf("%u\n", q);
	return 0;
}