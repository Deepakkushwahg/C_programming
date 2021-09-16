// program to find the area of circle

#include<stdio.h>
#define pie 3.14

void main()
{
	int res;
	res = area();
	printf("Area of circle = %d", res);

}
int area()
{
	int r, ar;
	printf("Enter the value: ");
	scanf("%d", &r);
	ar = pie*r*r;
	return ar;
}
 