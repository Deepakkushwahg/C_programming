#include<stdio.h>
int main()
{
	int i, max, c[128]={ };
	char a[1000];
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	for(i=0;a[i]!='\0';i++)
		c[a[i]]++;
	max = c[0];
	printf("Highest frequency character is/are ");
	for(i=0;i<=127;i++)
	      if(c[i]>max)
	           max=c[i];
	for(i=0;i<=127;i++)
	      if(c[i]==max)
	           printf("%c ", i);
	return 0;
}