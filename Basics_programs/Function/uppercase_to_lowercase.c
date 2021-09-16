#include<stdio.h>
char upper(char c)
{
	if(c>='A' && c<='Z')
		c=c+32;
	return c;
}
void main()
{
	char ch;
	printf("Enter the character: ");
	scanf("%c", &ch);
	ch = upper(ch);
	printf("%c", ch);
}