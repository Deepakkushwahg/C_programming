//Q:3
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	printf("Enter 1st string\n");
	gets(a);
	printf("Enter 2nd string\n");
	gets(b);
	strcat(a,b);
	printf("Strings after concatenation\n");
	puts(a);
	puts(b);
	return 0;
}