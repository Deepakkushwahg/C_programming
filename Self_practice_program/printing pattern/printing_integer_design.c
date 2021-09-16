#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n, a[100][100], i, j, k=0, l=0, z;
    scanf("%d", &n);
    z=n;
    while(k<=n)
    {
        for(i=l;i<=2*n-2-l;i++)
        {
            for(j=l;j<=2*n-2-l;j++)
            {
                if(i==l || i==2*n-2-l || j==l || j==2*n-2-l)
                    a[i][j]=z;
            }
        }
        l++;
        z--;
        k++;
    }
    for(i=0;i<=2*n-2;i++)
    {
        for(j=0;j<=2*n-2;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
