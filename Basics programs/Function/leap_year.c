#include<stdio.h>
void leap(int year)
{
	if (year%4==0)
	{
	          if (year%100 != 0)
	          {
	                printf("leap year");
	          }
	          else
	          {
	                if (year%400==0)
	                {
	                      printf("leap year");
	                }
	                else
	                {
	                      printf("Not leap year");
	                }
	          }
	}        
	else    
	{        
	          printf("Not leap year");      
	}
}
void main()
{
	int y;
	printf("Enter year: ");
	scanf("%d", &y);
	leap(y);
}