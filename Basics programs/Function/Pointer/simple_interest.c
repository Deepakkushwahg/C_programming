#include<stdio.h>
int main()
{
	float p, r, t, S, *ps=&S, *pp=&p, *pr=&r, *pt=&t;
	printf("Enter principle amount, rate and time: ");
	scanf("%f %f %f", pp, pr, pt);
	*ps=(*pp**pr**pt)/100;
	printf("Simple interest is = %f", *ps);
	return 0;
}