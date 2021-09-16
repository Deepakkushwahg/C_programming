// To convert the length in feet to centimeter

#include<stdio.h>

void main()
{
        float Lft, Lcm;
        printf("Enter the value of length in feet: ");
        scanf("%f", &Lft);
        Lcm = Lft * 30;
        printf("Length in centimeter is %f", Lcm);

}