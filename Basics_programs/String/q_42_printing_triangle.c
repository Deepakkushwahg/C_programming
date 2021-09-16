#include<stdio.h>
int main()
{
	int i, j;
	char a[100];
	printf("Enter your word\n");
	scanf("%s", a);
	printf("Your word is\n");
	printf("%s\n\n", a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;j<=i;j++)
			printf("%c", a[j]);
		printf("\n");
	}
	return 0;
}