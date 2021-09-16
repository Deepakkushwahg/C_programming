// to check the identification of character

#include<stdio.h>

void main()
{
      char ch;
      printf("Enter the character: ");
      scanf("%c", &ch);
      if (ch >= 97 && ch <= 122)
      {
            printf("character is alphabet");
      }
      else if (ch >= 48 && ch <= 57)
      {
            printf("character is digit");
      }
      else
      {
            printf("character is special symbol");
      }

}