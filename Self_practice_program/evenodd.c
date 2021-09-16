// to check the number even or odd

#include<stdio.h>

void main()
{
        int num;
        printf("Enter the value: ");
        scanf("%d", &num);
        if (num == 0)
        {
               printf("Number is zero");
        }
        else if (num % 2 == 0)
        {
               printf("number is even");
        }
        else
        {
               printf("number is odd");
        }
  
}         