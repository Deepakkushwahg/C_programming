#include<stdio.h>
#include<string.h>
int main()
{
	int i, min, x, c[128]={ };
	char a[1000];
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	for(i=0;a[i]!='\0';i++)
		c[a[i]]++;
	x = c[0];
	for(i=0;i<=127;i++)
	      if(c[i]>x)
	           x=c[i];
	min=x;
	for(i=0;i<=127;i++)
	      if(c[i]<min && c[i]>0)
		min=c[i];
	printf("Lowest frequency character is/are ");
	for(i=0;i<=127;i++)
	      if(c[i]==min)
	           printf("%c ", i);
	return 0;
}