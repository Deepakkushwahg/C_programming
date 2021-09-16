#include<stdio.h>
int main()
{
	int r[5], s[5], i, *pr=r, *ps=s, c1=0, c2=0, *pc1=&c1, *pc2=&c2;
	printf("Enter the marks of Ria\n");
	for(i=0;i<=4;i++)
		scanf("%d", pr+i);
	printf("Enter the marks of Sia\n");
	for(i=0;i<=4;i++)
		scanf("%d", ps+i);
	for(i=0;i<=4;i++)
	{
		if(pr[i]>ps[i])
			printf("Ria scored more in %d\n", i+1);
		else if(pr[i]<ps[i])
			printf("Sia scored more in %d\n", i+1);
		*pc1=*pc1+pr[i];
		*pc2=*pc2+ps[i];
	}
	if(*pc1/5>*pc2/5)
		printf("Ria scored more in average");
	else if(*pc1/5<*pc2/5)
		printf("Sia scored more in average");
	return 0;
}