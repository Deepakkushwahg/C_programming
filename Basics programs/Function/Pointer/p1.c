#include<stdio.h>
int main()
{
	int a[3]={7, 4, 1};
	int *p=a;
	printf("%u\n", sizeof(a));
	printf("%u\n", p);
	printf("%u\n", a);
	printf("%d\n", *p);
	printf("%d\n", 2[a]);
	printf("%u\n", 2+p);
	printf("%u\n", sizeof(p));
	return 0;
}