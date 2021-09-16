#include<stdio.h>
int primetest(int num)
{
	int i, c=0;
	for(i=2;i<num;i++)
	       if(num%i==0)
	       {
		c=1;
		break;
	       }
	if(c==0)
	     return 1;
	else
	     return 0;
}

int main()
{
	int num, x;
	printf("Enter the number: ");
	scanf("%d", &num);
	x=primetest(num);
	if(x==1)
	    printf("PRIME");
	else
	    printf("COMPOSITE");
	return 0;
}