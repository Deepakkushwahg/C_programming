//Q:2
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	printf("Enter 1st string\n");
	gets(a);
	printf("your 2nd string\n");
	strcpy(b,a);
	puts(b);
	return 0;
}