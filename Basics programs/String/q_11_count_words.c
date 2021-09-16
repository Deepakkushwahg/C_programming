#include<stdio.h>
int main()
{
	int i, c=0;
	char a[100];
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	for(i=0;a[i]!='\0';i++)
		if(a[i]==' ')
			c=c+1;
	if(a[0]==' ' && a[i-1]==' ')
		printf("Total no. of words = %d", c-1);
	else if(a[0]==' ' || a[i-1]==' ')
		printf("Total no. of words = %d", c);
	else
		printf("Total no. of words = %d", c+1);
	return 0;
}