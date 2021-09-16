#include<stdio.h>
int hamm(int a, int b)
{
	int c=0, r, s;
	while(a>0 || b>0)
	{
		r=a%2;
		s=b%2;
		if(r!=s)
		     c++;
		a=a/2;
		b=b/2;
	}
	return c;
}
void main()
{
	int a, b, h;
	printf("Enter two number: ");
	scanf("%d %d", &a, &b);
	h=hamm(a,b);
	printf("Hamming distance of %d and %d = %d", a, b, h);
}