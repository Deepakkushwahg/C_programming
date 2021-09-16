#include<stdio.h>
int bill(float m)
{
	float t, x;
	x=m+(20*m)/100;
	t=x+(15*x)/100;
	return t;
}
void main()
{
	float t, m;
	printf("Enter meal charge of customer: ");
	scanf("%f", &m);
	t=bill(m);
	printf("Total bill is %.2f", t);
}