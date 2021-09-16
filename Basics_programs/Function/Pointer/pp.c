#include<stdio.h>
int main()
{
	int a=7;
	int *p=&a;
	int **q=&p;
	int ***r=&q;
	printf("%u\n", p);
	printf("%d\n", a);
	printf("%u\n", q);
	printf("%u\n", &a);
	printf("%u\n", &p);
	printf("%u\n", &q);
	printf("%d\n", *q);
	return 0;
}