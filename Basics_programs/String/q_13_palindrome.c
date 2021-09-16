#include<stdio.h>
#include<string.h>
int main()
{
	int i, x;
	char a[100], b[100];
	printf("Enter your string\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
		b[i]=a[i];
	b[i]='\0';
	strrev(a);
	x=strcmp(a,b);
	if(x==0)
		printf("String is palindrome");
	else
		printf("String is not palindrome");
	return 0;
}