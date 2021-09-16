// jumping statements

#include<stdio.h>

void main()
{
          int n;
          scanf("%d", &n);
          if (n%2==0)
                 goto even;
          else
                 goto odd;
          even:
          printf("Number is even");
          goto label;
          odd:
          printf("Number is odd");
          label:
          printf("");
        
}