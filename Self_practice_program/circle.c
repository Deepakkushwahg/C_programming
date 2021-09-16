/*   
area and circumference of circle 
radius is entered by the user
*/

#include<stdio.h>

void main()
{
        float r, area, circum;
        printf("Enter the value: ");
        scanf("%f", &r);
        area = 3.14*r*r;
        printf("\tArea is %f", area);
        scanf("3.14*%f*%f is %f", &r, &r, &area);
        circum = 2*3.14*r;
        printf("\n\tcircumference is %f", circum);
        scanf("2*3.14*%f is %f", &r, &circum);

} 