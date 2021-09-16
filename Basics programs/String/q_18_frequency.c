#include<stdio.h>
#include<string.h>
int main()
{
	int i, c=0;
	char a[100], x;
	printf("Enter your string\n");
	gets(a);
	printf("Enter the character whose occurrences to be count: ");
	scanf("%c", &x);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==x)
			c=c+1;
	}
	printf("Number of occurrence of character %c is %d", x, c);
	return 0;
}