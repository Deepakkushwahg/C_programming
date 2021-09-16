// to find greatest number

#include<stdio.h>

void main()
{
      int a, b;
      printf("Enter the number: ");
      scanf("%d", &a);
      printf("Enter the number: ");
      scanf("%d", &b);
      if (a==b)
      {
            printf("\tBoth number is equal\n");
      }
      else
      {
            if (a>b)
            {
                  printf("\t%d is greatest number\n", a);
            }
            else
            {
                  printf("\t%d is greatest number\n", b);
            }
      }

}