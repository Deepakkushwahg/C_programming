// calculate bill

#include<stdio.h>

void main()
{
	int U;
	float B;
	printf("Enter the units: ");
	scanf("%d", &U);
	if (U<=50)
		B = U*0.5;
	else if (U<=150)
		B = U*0.75;
	else if (U<=250)
		B = U*1.2;
	else
		B = U*1.5;
	B = B+B*20/100;	
	printf("Total bill = %.2f", B);

}