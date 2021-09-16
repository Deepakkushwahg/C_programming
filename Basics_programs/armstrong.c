#include<stdio.h>
#include<math.h>
int main()
{
	int n, p=0, x, r, s=0, z;
	printf("Enter the number: ");
	scanf("%d", &n);
	x=n;
	z=n;
	while(x>0)
	{
		p++;
		x=x/10;
	}
	while(n>0)
	{
		r=n%10;
		s=s+pow(r,p);
		n=n/10;
	}
	if(s==z)
		printf("Number is armstrong");
	else
		printf("Number is not armstrong");
	return 0;
}