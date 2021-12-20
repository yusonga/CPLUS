#include <stdio.h>
void pound(int n);

int main(void)
{
	int times = 5;
	char ch='!';//ASCII = 33
	float f = 6.0f;
	pound(times);  //int 
	pound(ch); //==pound((int)ch);
	pound((int)f);
	return 0;
}


void pound(int n) //ANSI function
{
	while (n-- > 0)
		printf("#");
	printf("\n");
}