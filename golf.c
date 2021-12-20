#include <stdio.h>
/*wheat.c 指数增长*/

#define SQUARES 64

int main(void)
{
	const double CROP=2E16;
	double current, total;
	int count = 1;

	printf("sqare grains total\nfraction of  \n");
	printf("         added        grains\nworld total\n");
	total = current = 1.0;
	printf("%4d  %13.2e  %12.2e  %12.2e\n", count, current, total, total / CROP);
	while (count < SQUARES)
	{
		count += 1;
		current = 2.0*current;
		total += current;
		printf("%4d  %13.2e  %12.2e  %12.2e\n", count, current, total, total / CROP);

	}
	printf("That's all\n");
	return 0;
}