//Q :29
#include<stdio.h>
int main()
{
	int a[30], i, b[30], j;
	printf("Marks of class A students\n");
	for(i=0;i<30;i++)
		scanf("%d", &a[i]);
	printf("Marks of class B students\n");
	i=0;
	for(j=0;j<30;j++)
	{
		b[j]=a[i];
		printf("\tMarks of student of roll no. %d = %d\n", j+1, b[j]);
		i++;
	}
	return 0;

}