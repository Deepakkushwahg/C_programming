#include<stdio.h>
int main()
{
	printf("%u\n", sizeof(char*));
	printf("%u\n", sizeof(short int*));
	printf("%u\n", sizeof(int*));
	printf("%u\n", sizeof(float*));
	printf("%u\n", sizeof(double*));
	printf("%u\n", sizeof(long int*));
	return 0;
}