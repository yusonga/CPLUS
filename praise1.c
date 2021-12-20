#include <stdio.h>
#define PRAISE "You are un extraordianty being."

int main(void)
{
	char name[40];
	printf("What is your name>");
	scanf("%s", name);
	printf("Helol, %s.%s\n",name, PRAISE);
	return 0;
}