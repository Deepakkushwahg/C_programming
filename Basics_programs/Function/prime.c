#include<stdio.h>
int prime(int n)
{
	int i, f=0;
	for(i=2;i<n;i++)
		if(n%i==0)
		{
			f=1;
			return 2;
			break;
		}
	if(f==0)
		return 1;
}

int main()
{
	int i, n, t, r;
	scanf("%d",&t);
	int arr[100];
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		r=prime(n);
		arr[i]=r;
	}
	for(i=0;i<t;i++)
	{
		if(arr[i]==1)
			printf("Prime\n");
		else
			printf("Not prime\n");
	}
	return 0;
}