#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, la, lb;
	char a[100], b[100], ra, rb;
	printf("Enter 1st string\n");
	gets(a);
	printf("your 2nd string\n");
	gets(b);
	la=strlen(a);
	lb=strlen(b);
	if(la==lb)
	{
		for(i=1;i<=la-1;i++)
			for(j=0;j<=la-1-i;j++)
				if(a[j]>a[j+1])
				{
					ra=a[j];
					a[j]=a[j+1];
					a[j+1]=ra;
				}
		for(i=1;i<=lb-1;i++)
			for(j=0;j<=lb-1-i;j++)
				if(b[j]>b[j+1])
				{
					rb=b[j];
					b[j]=b[j+1];
					b[j+1]=rb;
				}
		if(strcmp(a,b)==0)
			printf("String is anagram");
		else
			printf("String is not anagram");
	}
	else
		printf("String are not anagram");
	return 0;
}