#include<stdio.h>
int main()
{
	char a[20];
	printf("Enter your name\n");
	scanf("%[^\n]", a);
	printf("Your name = %s", a);
	return 0;
}