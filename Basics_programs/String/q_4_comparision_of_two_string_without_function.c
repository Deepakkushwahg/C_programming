//Q:4
#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, c=0;
	char a[100], b[100];
	printf("Enter 1st string\n");
	gets(a);
	printf("your 2nd string\n");
	gets(b);
	for(i=0;a[i]!='\0';i++);
	for(j=0;j!=i;j++)
	{
		if(a[j]==b[j])
			c=c+1;
		else if(a[j]>b[j])
		{
			printf("string 1st have more ASCII value of mismatching character of string 2nd");
			break;
		}
		else
		{
			printf("string 2nd have more ASCII value of mismatching character of string 1st");
			break;
		}
	}
	if(c==i)
		printf("Identical");
	return 0;
}