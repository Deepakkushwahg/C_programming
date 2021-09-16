#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[100], x;
	printf("Enter your string\n");
	gets(a);
	printf("Enter the character whose first occurance to be found: ");
	scanf("%c", &x);
	for(i=0;a[i]!='\0';i++)
		if(a[i]==x)
			break;
	printf("First occurence of  character %c of position is %d", x, i+1);
	return 0;
}