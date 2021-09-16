#include<stdio.h>
int main()
{
	int a=1058;
	char *p=&a;
	printf("%d\n", a);
	printf("%u\n", p);
	printf("%u\n", &a);
	printf("%u\n", &p);
	printf("%u\n", *p);
	printf("%u\n", *(int*)p);
	printf("%d\n", *(p+1));
	printf("%d\n", *(p+2));
	return 0;
}