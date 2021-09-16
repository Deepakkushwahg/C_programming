#include<stdio.h>

void main()
{
        int a, out;
        scanf("%d", &a);
        out = a && 100 && !a;
        printf("%d", out);

}