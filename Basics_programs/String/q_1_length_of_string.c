//Q:1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int l;
	printf("Enter your string: ");
	scanf("%[^\n]", a);
	l = strlen(a);
	printf("Length of string = %d", l);
	return 0; 
}