#include<stdio.h>
int main()
{
	int h, *p=&h, t, *pt=&t;
	printf("Enter the working hour per day: ");
	scanf("%d", p);
	*pt=*p*6;
	printf("Total working hours is %d\n", *pt);
	if(*pt==60)
		printf("Total salary is 10,000");
	else if(*pt>60 && *pt<=65)
		printf("Total salary is 15,000");
	else if(*pt>=66 && *pt<=70)
		printf("Total salary is 20,000");
	else if(*pt>70)
		printf("Total salary is 25,000");
	return 0;
}