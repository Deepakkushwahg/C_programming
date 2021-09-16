/* substract the smaller
 number from greater number
*/

#include<stdio.h>

void main()
{
        int a, b, sub;
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
        if (a>b)
        {
              sub = a - b;
              printf("%d-%d is %d", a, b, sub);
        }
        else 
        {
              sub = b - a;
              printf("%d-%d is %d", b, a, sub);
        }

}    