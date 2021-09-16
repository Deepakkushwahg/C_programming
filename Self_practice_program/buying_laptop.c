// program to buy a laptop

#include<stdio.h>

void main()
{
	int RAM, pro, gra, SSD;
	printf("RAM: ");
	scanf("%d", &RAM);
	printf("Processor: ");
	scanf("%d", &pro);
	printf("Graphics: ");
	scanf("%d", &gra);
	printf("SSD: ");
	scanf("%d", &SSD);
	if( RAM >= 8 && pro >= 5 && gra >= 2 && SSD >= 256)
		printf("Laptop bought");
	else
		printf("Laptop not bought");

}