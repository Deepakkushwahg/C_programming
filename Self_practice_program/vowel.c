/* to check whether the character
     is vowel or consonent 
*/

#include<stdio.h>

void main()
{
char ch;
scanf("%c", &ch);
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
{
   printf("\tcharacter is vowel\n");
}
else
{
   printf("\tcharacter is consonent\n");
}

}