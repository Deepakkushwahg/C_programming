//insert an element in Array
#include<stdio.h>
int main()
{
	int a[1000],j,i,ele,pos,n,m;
	printf("Enter the size of  Array\n");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	printf("How many number you want to insert\n");
	scanf("%d", &m);
	for(i=0;i<m;i++)
	{
   		printf("Enter the position where you want to insert\n");
		scanf("%d", &pos);
		printf("Enter the element\n");
		scanf("%d", &ele);
		for(j=n;j>=pos;j--)
			a[j]=a[j-1];
		a[pos-1]=ele;
		n++;
	}
	for(i=0;i<n;i++)
		printf("%d ", a[i]);
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              