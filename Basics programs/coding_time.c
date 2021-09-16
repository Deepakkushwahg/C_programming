// calculate the coding time

#include<stdio.h>

void main()
{
	int h1, m1, s1, h2, m2, s2, h3, m3, s3, t1, t2, t3, T, h, m, s;
	printf("Enter the starting time: ");
	scanf("%d:%d:%d", &h1, &m1, &s1);
	printf("Enter the ending time: ");
	scanf("%d:%d:%d", &h2, &m2, &s2);
	printf("Enter resolve error time: ");
	scanf("%d:%d:%d", &h3, &m3, &s3);
	t1 = h1*3600+m1*60+s1;
	t2 = h2*3600+m2*60+s2;
	t3 = h3*3600+m3*60+s3;
	if (t1<t2)
	{
		T = t2-t1+t3;
		h = T/3600;
		m = (T%3600)/60;
		s = (T%3600)%60;
		printf("Total time of coding = %d:%d:%d", h, m, s);
	}
	else
		printf("\n\tInvalid");
	
}