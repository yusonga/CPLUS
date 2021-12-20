//数组元素之和
#include <stdio.h>
#define SIZE 10

int sum(int *start, int *end);
int main()
{
	int marble[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
	long answer;
	answer = sum(marble, marble + SIZE);
	printf("The total number of marble is %ld.\n", answer);
	printf("The size of marble is %zd bytes.\n", sizeof marble);
	return 0;
}

int sum(int *start, int *end)
{
	int total = 0;
	while (start < end)
	{
		total += *start; //add value of the table
		start ++;//let pointer point next value
	}
	//for (i = 0; i <n; i++)
	//	total += ar[i];
	//printf("The size of ar is %zd bytes.\n", sizeof ar);
	return total;
}