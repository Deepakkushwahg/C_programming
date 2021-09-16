//Q :6
#include<stdio.h>
#include<math.h>
int main()
{
	int a[1000], n, i, sum=0;
	float St , M, V=0;
	printf("Enter size of array: ");
	scanf("%d", &n);
	printf("Enter the element\n");
	for(i=0;i<=n-1;i++)
		scanf("%d", &a[i]);
	for(i=0;i<=n-1;i++)
		sum = sum+a[i];
	M = (float)sum/n;
	for(i=0;i<=n-1;i++)
		V = V+pow((a[i]-M),2);
	V = V/n;
	St = sqrt(V);
	printf("Standard deviation = %f", St);
	return 0;

}