//Q:1
#include<stdio.h>
int main()
{
	int l;
	char a[100];
	printf("Enter your string: ");
	scanf("%[^\n]", a);
	for(l=0;a[l]!='\0';l++);
	printf("Length of string = %d", l);
	return 0;
}