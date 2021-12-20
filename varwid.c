#include<stdio.h>
int main(void)
{
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;
	printf("enter width\n");
	scanf("%d", &width);
	printf("the number is:%*d:\n", width, number);
	printf("Enter width and a precision:\n");
	scanf("%d %d", &width, &precision);
	printf("weight = %*.*f\n", width, precision, weight);
	return 0;
}