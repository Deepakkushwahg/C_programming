#include<stdio.h>
int main() 
{
    int n,j,i;
    char a[100][100];
    scanf("%d", &n);        
    for(i=0;i<=n-1;i++)
            scanf("%s", a[i]);
    for(i=0;i<=n-1;i++)
    {
        j=strlen(a[i]);
        if(j-1>10)
            printf("%c%d%c\n", a[i][0], j-2, a[i][j-1]);
        else
                printf("%s\n", a[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
