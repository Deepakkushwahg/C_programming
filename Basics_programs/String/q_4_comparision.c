//Q:4
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	printf("Enter 1st string\n");
	gets(a);
	printf("your 2nd string\n");
	gets(b);
	if(strcmp(a,b)==0)
		printf("Identical");
	else if(strcmp(a,b)==1)
		printf("string 1st have more ASCII value of mismatching character of string 2nd");
	else
		printf("string 2nd have more ASCII value of mismatching character of string 1st");
	return 0;
}