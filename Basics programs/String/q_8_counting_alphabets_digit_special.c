//Q:8
#include<stdio.h>
int main()
{
	int i, c1=0, c2=0, c3=0;
	char a[100];
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
			c1=c1+1;
		else if(a[i]>='0' && a[i]<='9')
			c2=c2+1;
		else
			c3=c3+1;
	}
	printf("Total no. of alphabets = %d\n", c1);
	printf("Total no. of digits = %d\n", c2);
	printf("Total no. of special character = %d", c3);
	return 0;
}