#include<stdio.h>
int main()
{
	int a=7, b=10, c=8;
	int *d[3]={&a, &b, &c};
	printf("%u\n", d);
	printf("%u\n", d[0]);
	printf("%u\n", *d);
	printf("%u\n", d+2);
	printf("%u\n", **(d+1));
	printf("%u\n", *(2[d]+3));
	printf("%d\n", **(d+2)+7);
	return 0;
}