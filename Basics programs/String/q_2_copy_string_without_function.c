//Q:2
#include<stdio.h>
int main()
{
	int i;
	char a[100], b[100];
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	for(i=0;a[i]!='\0';i++)
		b[i]=a[i];
	b[i]='\0';
	printf("Another string\n%s", b);
	return 0;
}