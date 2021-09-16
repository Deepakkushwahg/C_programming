//Q:10
#include<stdio.h>
int main()
{
	int i, c1=0, c2=0;
	char a[100];
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
			c1=c1+1;
		else if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
			c2=c2+1;
	}
	printf("Total no. of vowels = %d\n", c1);
	printf("Total no. of consonants = %d", c2);
	return 0;
}