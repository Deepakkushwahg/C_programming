#include<stdio.h>
int main()
{
	int a[1000], n, i, j, x, s, f=0;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the element\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	for(i=0;i<=n-1;i++)
	{
		x=1;
		s=0;
		if(f==1)
			i=i-1;
		f=0;
		while(a[i]>x)
		{
			if(a[i]%x==0)
				s=s+x;
			x++;
		}
		if(s==a[i])
		{
			for(j=i;j<=n-1;j++)
				a[j]=a[j+1];
			n--;
			f=1;
		}
	}
	printf("Updated array is\n");
	for(i=0;i<=n-1;i++)
	printf("%d ", a[i]);
	return 0;
}