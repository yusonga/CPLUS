#include <stdio.h> 

int main()
{
	int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};
	printf("zippo = %p,  zippo + 1 = %p\n", zippo, zippo+1); 
	//zippo是一个内含2int的数组地址，point一个8字节的数组对象 zippo+1(60+8=68)
	printf("zippo[0] = %p,  zippo[0] + 1 = %p\n", zippo[0], zippo[0]+1);
	printf("*zippo = %p,  *zippo + 1 = %p\n", *zippo, *zippo+1);
	//zippo=zippo[0]=*zippo address, zippo + 1=zippo[0]+1 adress
	//zippo[0]只想一个4字节的数据对象， zippo[0]+1 其值加4（60+4=64）
	printf("zippo[0][0] = %d\n", zippo[0][0]);
	printf("*zippo[0] = %d\n", *zippo[0]);
	printf("**zippo = %d\n", **zippo);
	//zippo[0][0]==*zippo[0]=**zipp = 2 value
	printf("zippo[2][1] = %d\n", zippo[2][1]);
	printf("*(*(zippo+2)+1) = %d\n", *(*(zippo+2)+1));
	//zippo[2][1]=*(*(zippo+2)+1) = 3 value
	return 0;
}