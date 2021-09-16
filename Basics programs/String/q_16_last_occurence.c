#include<stdio.h>
#include<string.h>
int main()
{
	int i, j;
	char a[100], x;
	printf("Enter your string\n");
	gets(a);
	printf("Enter the character whose last occurance to be found: ");
	scanf("%c", &x);
	for(i=0;a[i]!='\0';i++)
		if(a[i]==x)
			j=i;
	printf("Last occurence of  character %c of position is %d", x, j+1);
	return 0;
}