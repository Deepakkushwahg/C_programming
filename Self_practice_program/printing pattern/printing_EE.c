#include<stdio.h>
int main()
{
	int n, i, j, k;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		k=0;
		while(k<2)
		{
			if(i==1|| i==n) 
			{
				printf("      #");
				for(j=1;j<=n/2;j++)
					printf(" #");
			}
			else if(n%2==0 && i==n/2)
			{
				printf("      #");
				for(j=1;j<=n/2;j++)
					printf(" #");
			}
			else if(n%2!=0 && i==n/2+1)
			{
				printf("      #");
				for(j=1;j<=n/2;j++)
					printf(" #");
			}
			else
			{
				printf("      #");
				for(j=1;j<=n/2;j++)
					printf("  ");
			}
			k++;
		}
		printf("\n");
	}
	return 0;
}


