#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("Enter the size: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
	    printf("      #");
	    for(j=1;j<=i;j++)
	       printf("  ");
	    printf("#");
	    for(j=i;j<=n;j++)
	        printf("  ");
	    k=0;
	    while(k < 2)
	    {
	        if(i == 1 || i == n)
	        {
	            printf("      #");
	            for(j=1;j<=n;j++)
	                printf(" #");
	         }
	        else
	        {
	            printf("      #");
	            for(j=1;j<=n;j++)
	                printf("  ");
	        }
	        k++;
	    }
	    if(i == 1 || i == n)
	    {
	        printf("      #");
	        for(j=1;j<=n;j++)
	            printf(" #");
	        printf("  ");
	    }
	    else
	    {
	        printf("      #");
	        for(j=1;j<=n;j++)
	            printf("  ");
	        printf(" #");
	    }
	    if(i == 1)
	    {
	        printf("       ");
	        for(j=1;j<=n;j++)
	            printf(" #");
	        printf("  ");
	    }
	    else if(i == n)
	    {
	        printf("      #");
	        for(j=1;j<=n;j++)
	            printf(" #");
	        printf(" #");
	    }
	    else
	    {
	        printf("      #");
	        for(j=1;j<=n;j++)
	            printf("  ");
	        printf(" #");
	    }
	    printf("      #");
	    for(j=i;j<=n;j++)
	        printf("  ");
	    printf("#\n");
	}
	for(i=1;i<=n;i++)
	{
	    printf("      #");
	    for(j=i;j<=n;j++)
	        printf("  ");
	    printf("#");
	    for(j=1;j<=i;j++)
	        printf("  ");
	    k = 0;
	    while(k < 2)
	    {
	        if(i == n)
	        {
	            printf("      #");
	            for(j=1;j<=n;j++)
	                printf(" #");
	        }
	        else
	        {
	            printf("      #");
	            for(j=1;j<=n;j++)
	                printf("  ");
	        }
	        k++;
	    }
	    printf("      #");
	    for(j=1;j<=n;j++)
	        printf("  ");
	    printf("        #");
	    for(j=1;j<=n;j++)
	        printf("  ");
	    printf(" #      #");
	    for(k=1;k<=i;k++)
	        printf("  ");
	    printf("#\n");
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
	    printf("     #");
	    for(j=i;j<=n;j++)
	        printf("  ");
	    printf("#");
	    for(k=1;k<=i;k++)
	        printf("  ");
	    printf("       #");
	    for(j=1;j<=n;j++)
	        printf("  ");
	    printf(" #");
	    if(i == 1 || i == n)
	    {
	        printf("        ");
	        for(j=1;j<=n;j++)
	            printf(" #");
	        printf(" ");
	    }
	    else
	    {
	        printf("       #");
	        for(j=1;j<=n;j++)
	            printf("  ");
	        printf(" ");
	    }
	    printf("       #");
	    if(i == n)
	         for(j=1;j<=n;j++)
	            printf(" #");
	    else
	        for(j=1;j<=n;j++)
	            printf("  ");
	    printf(" #");
	    printf("        #");
	    k = 0;	
	    while(k < 2)
	    {
	        for(j=1;j<=n;j++)
	            printf(" ");
	        printf(" ");
	        k++;
	    }
	    printf(" #");
	    if(i == 1)
	    {
	        printf("       ");
	        for(j=1;j<=n;j++)
	            printf(" #");
	        printf("  ");
	    }
	    else if(i == n)
	    {
	        printf("      #");
	        for(j=1;j<=n;j++)
	            printf(" #");
	        printf(" #");
	    }
	    else
	    {
	        printf("      #");
	        for(j=1;j<=n;j++)
	            printf("  ");
	        printf(" #");
	    }
	    printf("         #");
	    if(i == n)
	        for(j=1;j<=n;j++)
	            printf(" #");
	    else
	        for(j=1;j<=n;j++)
	            printf("  ");
	    printf(" #\n");
	}
	for(i=1;i<=n;i++)
	{
	    printf("     #");
	    for(k=1;k<=i;k++)
	        printf("  ");
	    printf("#");
	    for(j=i;j<=n;j++)
	        printf("  ");
	    if(i == n)
	    {
	        printf("       #");
	        for(j=1;j<=n;j++)
	            printf(" #");
	        printf(" #");
	    }
	    else
	    {
	        printf("       #");
	        for(j=1;j<=n;j++)
	            printf("  ");
	        printf(" #");
	    }
	    if(i == n)
	    {
	        printf("        ");
	        for(j=1;j<=n;j++)
	            printf(" #");
	        printf("  ");
	    }
	    else
	    {
	        printf("         ");
	        for(j=1;j<=n;j++)
	            printf("  ");
	        printf("#");
	    }
	    printf("      #");
	    for(j=1;j<=n;j++)
	        printf("  ");
	    printf(" #        #");
	    for(j=i;j<=n;j++)
	        printf(" ");
	    printf("#");
	    for(k=1;k<=i;k++)
	        printf(" ");
	    for(k=1;k<i;k++)
	        printf(" ");
	    printf("#");
	    for(j=i;j<=n;j++)
	        printf(" ");
	    printf("#      #");
	    for(j=1;j<=n;j++)
	        printf("  ");
	    printf(" #         #");
	    for(j=1;j<=n;j++)
	        printf("  ");
	    printf(" #\n");
	}
}