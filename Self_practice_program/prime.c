// to check the number prime or not

#include<stdio.h>

void main()
{
	int num, i;
	printf("Enter the value: ");
	scanf("%d", &num);
	for(i  = 2; num>i; i++)
		if (num%i==0)
    		     break;
    
	if(i==num)
	{
		printf("%d is prime", num);
	}
	else
	{
		printf("%d is not prime", num);
	}
}    