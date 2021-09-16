#include<stdio.h>
int main()
{
	int i, j=0;
	char a[100], ch;
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	for(i=0;a[i]!='\0';i++);
	i--;
	while(j<i)
	{
		ch=a[i];
		a[i]=a[j];
		a[j]=ch;
		j++;
		i--;
	}
	
	printf("String after reverse\n%s", a);
	return 0;
}