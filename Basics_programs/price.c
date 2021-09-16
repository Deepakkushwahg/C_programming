/* program for calculating the price of 
     product after adding the sales tax to 
     it original price
*/

#include<stdio.h>

void main()
{
float p, tax, tp;
printf("Enter the price: ");
scanf("%f", &p);
printf("Enter the rate of price: ");
scanf("%f", &tax);
tp = p*tax/100;
printf("Price of product = %f", tp);
 
}