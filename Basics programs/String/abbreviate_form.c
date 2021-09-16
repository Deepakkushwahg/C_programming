#include<stdio.h>
int main()
{
	int i, j=0;
	char a[100], b[100];
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	if(a[0]!=32)
	{
		if(a[0]>=97 && a[0]<=122)
		{
			b[j]=a[0]-32;
			j++;
		}
		else if(a[0]>=65 && a[0]<=90)
		{
			b[j]=a[0];
			j++;
		}
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==32)
		{
			if(a[i+1]>=97 && a[i+1]<=122)
			{
				b[j]=a[i+1]-32;
				j++;
			}
			else if(a[i+1]>=65 && a[i+1]<=90)
			{
				b[j]=a[i+1];
				j++;
			}
		}
	}
	b[j]='\0';
	printf("Abbreviate form of string\n");
	printf("%s", b);
	return 0;
}