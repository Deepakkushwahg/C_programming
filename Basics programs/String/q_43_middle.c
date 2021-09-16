#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i, l, k, j;
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	l=strlen(a);
	for(i=0;i<=l-1;i++)
	        if(a[i]==' ')
	        {
		k=i;
		break;
	         }
	for(i=0;i<=l-1;i++)
	        if(a[i]==' ')
		j=i;
	printf("Middle name is\n");
	for(i=k+1;i<=j-1;i++)
		printf("%c", a[i]);
	return 0;
}