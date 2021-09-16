#include<stdio.h>
int QUAD(int a, int b, int c)
{
	int t, x;
	x=b*b-4*a*c;
	if(x>=0)
		t=1;
	else
		t=0;
	return t;
}
void main()
{
	int a, b, c, t;
	printf("Enter the coefficient of quadratic equation: ");
	scanf("%d %d %d", &a, &b, &c);
	t=QUAD(a,b,c);
	if(t==1)
		printf("Roots of quadratic equation is Real");
	else
		printf("Roots of quadratic equation is Imaginary");
}