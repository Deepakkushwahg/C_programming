#include<stdio.h>

void main()
{
int marks;
scanf("%d", &marks);
if (marks>90 || marks==90)
{
     printf("\tgrade is O");
}
else if (marks<90 && marks>80 || marks==80)
{
     printf("\tgrade is A+");
}
else if (marks<80 && marks>70 || marks==70)
{
     printf("\tgrade is A");
}
else if (marks<70 && marks>60 || marks==60)
{
     printf("\tgrade is B+");
}
else if (marks<60 && marks>50 || marks==50)
{
     printf("\tgrade is B");
}
else if (marks<50 && marks>40)
{
     printf("\tgrade is C");
}
else if (marks==40)
{
     printf("\tJust pass only with grade C");
}
else 
{
     printf("\tfail");
}


}