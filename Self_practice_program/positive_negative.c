/* program to display a number
     if user entered a negative number
*/

#include<stdio.h>

void main()
{
      int num;
      scanf("%d", &num);
      if (num < 0)
      {
            printf("\tUser entered number is %d\n", num);
      }
      else
      {
            printf("\tUser didn't entered number\n");
      }

}