#include <stdio.h>
int main()
{
	int n, a=0, c, b=1;
	scanf("%d", &n);
	printf("%d ", a); 
	while(n-1>0)
	{
		c=a;
		a=a+b;
		b=c;
		printf("%d ", a);
		n--;    
	}
	return 0;
}
