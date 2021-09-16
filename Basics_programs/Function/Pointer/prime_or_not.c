#include<stdio.h>
int main()
{
	int n, *p=&n, i, k=0;
	printf("Enter the number: ");
	scanf("%d", p);
	for(i=2;i<=*p;i++)
	{
		if(*p%i==0)
		break;
	}
	if(i==*p)
		printf("Number is prime");
	else
		printf("Number is not prime");

}