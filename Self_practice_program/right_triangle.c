// hypotenuse of a right angled triangle

#include<stdio.h>
#include<math.h>

void main()
{ 
        float base, height, hypotenuse;
        printf("Enter the value of base: ");
        scanf("%f", &base);
        printf("Enter the value of height: ");
        scanf("%f", &height);
        hypotenuse = sqrt(base*base + height*height);
        printf("\thypotenuse is %f", hypotenuse);

}