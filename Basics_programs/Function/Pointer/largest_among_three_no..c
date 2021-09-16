#include<stdio.h>
int main()
{
	int a, b, c, *pa=&a, *pb=&b, *pc=&c, d, *pd=&d;
	printf("Enter three numbers: ");
	scanf("%d %d %d", pa, pb, pc);
	(*pd)=(*pa)>(*pb) ? ((*pa)>(*pc)?(*pa):(*pc)):((*pb)>(*pc)?(*pb):(*pc));
	printf("Largest number is %d", *pd);
	return 0;
}