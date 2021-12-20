#include <stdio.h> 

int main()
{
	int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};
	int(*pz)[2];
	pz = zippo;
	printf("pz = %p,  pz + 1 = %p\n", pz, pz+1); 
	//pz是一个内含2int的数组地址，point一个8字节的数组对象 pz+1(60+8=68)
	printf("pz[0] = %p,  pz[0] + 1 = %p\n", pz[0], pz[0]+1);
	printf("*pz = %p,  *pz + 1 = %p\n", *pz, *pz+1);
	//pz=pz[0]=*pz address, pz + 1=pz[0]+1 adress
	//pz[0]只想一个4字节的数据对象， pz[0]+1 其值加4（60+4=64）
	printf("pz[0][0] = %d\n", pz[0][0]);
	printf("*pz[0] = %d\n", *pz[0]);
	printf("**pz = %d\n", **pz);
	//pz[0][0]==*pz[0]=**zipp = 2 value
	printf("pz[2][1] = %d\n", pz[2][1]);
	printf("*(*(pz+2)+1) = %d\n", *(*(pz+2)+1));
	//pz[2][1]=*(*(pz+2)+1) = 3 value
	return 0;
}