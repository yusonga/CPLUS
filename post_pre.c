#include <stdio.h>
int main(void)
{
	int a = 1, b = 1;
	int a_post, pre_b;
	a_post = 2*a++;//后缀递增
	pre_b = 2*++b;//前缀递增
	printf("a a_post b pre_b\n");
	printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);
	return 0;
}
//a_post是a递增前的值
//b_pre是b递增后的值 
