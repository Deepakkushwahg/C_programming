// calculate average marks of four subject

#include<stdio.h>

void main()
{
      float P, C, M, E, avg;
      printf("Marks of physics is: ");
      scanf("%f", &P);
      printf("Marks of chemistry is: ");
      scanf("%f", &C);
      printf("Marks of math is: ");
      scanf("%f", &M);
      printf("Marks of english is: ");
      scanf("%f", &E);
      avg = (P + C + M + E)/4;
      if (avg >= 50)
      {
          printf("\tPass");
      }
      else
      {
          printf("\tFail");
      }


}