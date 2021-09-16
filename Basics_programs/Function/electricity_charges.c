#include<stdio.h>
float unit(int u)
{
	float b;
	if(u>=1 && u<=100)
		b=(float)u*2.00;
	else if(u>=101 && u<=200)
		b=(float)u*3.50;
	else
		b=(float)u*4.50;
	b=b+10*b/100;
	return b;
}
void main()
{
	int u;
	float b;
	printf("Enter the units of electricity: ");
	scanf("%d", &u);
	b=unit(u);
	printf("Electricity charge is %.2f", b);
}