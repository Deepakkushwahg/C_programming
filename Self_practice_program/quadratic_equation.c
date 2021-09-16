// to calculate roots of a quadratic equation

#include<stdio.h>
#include<math.h>

void main()
{
int a, b, c, X1, X2, D;
scanf("%d %d %d", &a, &b, &c);
D = sqrt(b*b-4*a*c);
X1 = (-b+D)/2*a;
X2 = (-b-D)/2*a;
printf("\tRoots of quadratic equation is %d and %d", X1, X2);

}
