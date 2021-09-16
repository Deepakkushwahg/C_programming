#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[100], x;
	printf("Enter your string\n");
	gets(a);
	printf("Enter the character whose all occurance to be found: ");
	scanf("%c", &x);
	printf("All occurrence of a character %c of positions is ", x);
	for(i=0;a[i]!='\0';i++)
		if(a[i]==x)
			printf("%d ", i+1);
	return 0;
}