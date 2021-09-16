#include<stdio.h>
int main()
{
	int i,j;
	char a[100];
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	for(i=0;a[i]!='\0';i++)
		if(a[i]==32)
		{
			for(j=i;a[j]!='\0';j++)
				a[j]=a[j+1];
			i--;
		}
	printf("String after space deleted\n");
	printf("%s", a);
	return 0;
}