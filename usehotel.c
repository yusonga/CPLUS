#include <stdio.h>
#include "hotel.h"

int main(void)
{
	int nights;
	double hotel_rate;
	int code;
	while ((code = menu()) != QUIT)
	{
		switch (code)
		{
			case 1: hotel_rate = HOTEL1;
			break;
			case 2: hotel_rate = HOTEL2;
			break;
			case 3: hotel_rate = HOTEL3;
			break;
			case 4: hotel_rate = HOTEL4;
			break;
			default: hotel_rate = 0.0;
			printf("Oops!\n");
			break;
		}
		nights = getnights();
		showprice(hotel_rate, nights);
	}
	printf("Thank you and bye.\n");
	return 0;
}
int menu(void)
{
	int code, status;
	printf("\n%s%s\n", STARS, STARS);
	printf("Enter the number of the desired hotel:\n");
	printf("1) FA   2) HO\n");
	printf("3) CP   4) TS\n");
	printf("5) quit\n");
	printf("\n%s%s\n", STARS, STARS);
	while ((status = scanf("%d", &code)) != 1 ||(code < 1 || code >5))
	{
		if (status != 1)
			scanf("%*s"); //处理非整数输入
		printf("Enter from 1 to 5.\n");
	}
	return code;
}

int getnights(void)
{
	int nights;
	printf("How many nights are needed?");
	while(scanf("%d", &nights) != 1)
	{
		scanf("%*s");
		printf("enter an integer.\n");
	}
	return nights;
}


void showprice(double rate, int nights)
{
	int n;
	double total = 0.0;
	double factor = 1.0;
	for(n=1;n<=nights;n++,factor*=DISCOUNT)
		total += rate*factor;
	printf("The total cost will be $%0.2f.\n", total);
}