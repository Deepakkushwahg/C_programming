#include<stdio.h>

void main()
{
	char ch;
	printf("Enter the character: ");
	scanf("%c", &ch);
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		printf("Lowercase vowel");
	else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		printf("Uppercase vowel");
	else if (ch>='A' && ch<='Z')
		printf("Uppercase consonant");
	else if (ch>='a' && ch<='z')
		printf("Lowercase consonant");
	else if (ch>='0' && ch<='9')
		printf("digit");
	else
		printf("Special character");
} 