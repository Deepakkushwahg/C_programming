#include<stdio.h>
int main()
{
	int y, *p=&y;
	printf("Enter the year: ");
	scanf("%d", p);
	if(*p%4==0)
	{
		if(*p%100!=0)
			printf("Leap year");
		else if(*p%400==0)
			printf("Leap year");
		else
			printf("Not leap year");
	}
	else
		printf("Not leap year");
}