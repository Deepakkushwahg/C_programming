// to check the number is even or odd 

#include<stdio.h>

void main()
{
        int num;
        printf("Enter the number: ");
        scanf("%d", &num);
        if (num == 0)
        {
              printf("Number is zero ");
        }
        else if(num%2 == 0)
        {
              printf("Number %d is Even", num);
        }
        else
        {
              printf("Number %d is Odd", num);
        }

}
