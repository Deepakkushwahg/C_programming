#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("Enter your string\n");
	gets(a);
	strrev(a);
	printf("String after reverse\n");
	puts(a);
	return 0;
}