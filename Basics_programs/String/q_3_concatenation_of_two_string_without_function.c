//Q:3
#include<stdio.h>
#include<string.h>
int main()
{
	int i, j;
	char a[100], b[100];
	printf("Enter 1st string\n");
	gets(a);
	printf("Enter 2nd string\n");
	gets(b);
	for(i=0;a[i]!='\0';i++);
	a[i]=' ';
	i++;
	for(j=0;b[j]!='\0';j++,i++)
		a[i]=b[j];
	a[i]='\0';
	printf("Strings after concatenation\n");
	puts(a);
	puts(b);
	return 0;
}