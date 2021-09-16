#include<stdio.h>
void rms(int **q)
{
	printf("%u\n", *(q+2));
	printf("%u\n", *(*(q+1)+1));
	printf("%u\n", *(2+q[0]));
	printf("%u\n", *(1+*(q+2))+10);
}
void main()
{
	int a[3]={4, 7, 2};
	int b[3]={1, 8, 9};
	int c[3]={3, 6, 10};
	int *d[3]={a, b, c};
	rms(d);
}