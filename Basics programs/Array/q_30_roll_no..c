//Q :30
#include<stdio.h>
int main()
{
	int a[1000], n, m, i=0, j;
	printf("Enter the beginning roll number and ending roll number: ");
	scanf("%d %d", &m, &n);
	for(j=m;j<=n;j++)
	{
		a[i]=j;
		i++;	
	}
	printf("Roll no. of students\n");
	for(i=0;i<=n-m;i++)
		printf("%d\n", a[i]);
	return 0;
}