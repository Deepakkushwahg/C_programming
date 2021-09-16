//Q:6
#include<stdio.h>
int main()
{
	int i;
	char a[100];
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65 && a[i]<=90)
			a[i]=a[i]+32;
	}
	printf("String after conversion\n");
	printf("%s", a);
	return 0;
}