#include <stdio.h>
int main()
{
	int wt;
	float balance, total, amount;
	scanf("%d %f", &wt, &balance);
	total=wt+0.50;
	if(total>balance)
		printf("%.2f", balance);
	else if(wt%5!=0)
		printf("%.2f", balance);
	else
	{
		amount=balance-total;
		printf("%.2f", amount);
	}
	return 0;
}
