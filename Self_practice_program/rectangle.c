// area and perimeter of rectangle

#include<stdio.h>

void main()
{
        int length, breadth, area, perimeter;
        printf("Enter first value: ");
        scanf("%d", &length);
        printf("Enter second value: ");
        scanf("%d", &breadth);
        area = length*breadth;
        printf("\tarea %d*%d is %d", length, breadth, area);
        perimeter = 2*(length+breadth);
        printf("\n\tperimeter 2*(%d + %d) is %d", length, breadth, perimeter);

}