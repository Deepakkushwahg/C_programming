#include<stdio.h>
int main()
{
	int i, max, c[128]={ };
	char a[1000];
	printf("Enter your string\n");
	scanf("%[^\n]", a);
	for(i=0;a[i]!='\0';i++)
		c[a[i]]++;
	for(i=0;i<=127;i++)
	{
		if(c[i]>0)
			printf("Frequency of character %c = %d\n", i, c[i]);
	}
	max = c[0];
	for(i=0;i<=127;i++)
	{
		if(c[i]>max)
			max = c[i];
		else
			max=max;
	}
	printf("Maximum frequency of character %c = %d", i, max);
	return 0;
}