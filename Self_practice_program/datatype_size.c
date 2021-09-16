// program to find size of int, float, double and char

#include<stdio.h>
#include<math.h>

void main()
{
   char a;
   printf("Enter the datatype: ");
   scanf("%c", &a);
   switch(a)
   {
      case 'i':

      case 'f':
      printf("4 byte");
      break;
      case 'd':
      printf("8 byte");
      break;
      case 'c':
      printf("1 byte");
      break;
      default:
      printf("invalid");
   }

}