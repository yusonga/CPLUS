#include <stdio.h>
int main(void)
{
	printf("Tpye int has a size of %zd bytes.\n", sizeof(int));
	printf("Tpye char has a size of %zd bytes.\n", sizeof(char));
	printf("Tpye long has a size of %zd bytes.\n", sizeof(long));
	printf("Tpye long long has a size of %zd bytes.\n", sizeof(long long));
	return 0;

}
