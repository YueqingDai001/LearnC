#include<stdio.h>
int main(void)
{
	unsigned int un = 3000000000;//无符号整型
	short end = 200;//短
	long big = 65537;//长64位
	long long verybig = 12345678908642;
	
	printf("un = %u and not %d\n",un,un);//u int
	printf("end = %hd and %d\n",end,end);//short
	printf("big = %ld and not %hd\n",big,big);//long
	printf("verybig = %lld and not %ld\n",verybig,verybig);//long long 
	
	return 0;
}
