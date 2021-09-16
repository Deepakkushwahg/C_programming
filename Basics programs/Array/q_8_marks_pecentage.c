//Q : 8
#include<stdio.h>
int main()
{
	int a[1000], n, i, st=0; 
	printf("Enter no. of students: ");
	scanf("%d", &n);
	printf("Enter its percentage\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>60)
			st=st+1;
	}
	printf("Number of students above then 60%% marks = %d", st);
	return 0;

}
