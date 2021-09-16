#include<stdio.h>
int main()
{
	int n, i, j, k;
	printf("Enter the size: ");
	scanf("%d", &n);
	if(n>=3)
	{
	    for(i=0;i<=n;i++)
	    {
	        for(j=i;j<=n;j++)
	             printf("  ");
	        printf("*");
	        for(k=0;k<=i-1;k++)
	        {
	            if(i==n/2)
	                printf("**");
	            else
	                printf("  ");
	         }
	        for(k=0;k<=i-1;k++)
	        {
	            if(i==n/2)
		printf("**");
	            else
	                printf("  ");
	        }
	        printf("*\n");
	    }
	}
	else
    	     printf("Please enter the size above 2");
	return 0;
}    
