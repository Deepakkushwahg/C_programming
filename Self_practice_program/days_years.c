// to convert specified days into years, weeks and days

#include<stdio.h>

void main()
{
       int days, years, weeks, day;
       printf("Enter the number of days: ");
       scanf("%d", &days);
       years = days/365;
       weeks = (days%365)/7;
       day = (days%365)%7;
       printf("Years is %d\n", years);
       printf("Weeks is %d\n", weeks);
       printf("Days is %d", day);

}