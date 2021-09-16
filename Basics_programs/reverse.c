// find the reverse of inputted number and check  the number polenty

#include<stdio.h>

void main()
{
int n, i, r;
printf("Enter the number: ");
scanf("%d", &n);
for(r=0;n!=0;n=n/10)
{
i=n%10;
r=r*10+i;
}
if(n>0)
printf("%d", -r);
else
printf("%d", r);

}


