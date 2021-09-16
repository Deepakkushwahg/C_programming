/*#include<stdio.h>
int main()
{
	int i, j;
	char a[100];
	printf("Enter the string\n");
	scanf("%s", a);
	printf("%s\n", a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;j<=i;j++)
			printf("%c", a[j]);
		printf("\n");
	}
	return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[100];
	scanf("%s", a);
	printf("%s\n", a);
	for(i=1;i<=strlen(a);i++)
		printf("%-12.*s\n", i, a);
	return 0;
}
