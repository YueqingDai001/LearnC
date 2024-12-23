#include<stdio.h>
#define SIZE 4
int main(void)
{
	short dates[SIZE];//short 类型数组
	short * pti;//short 类型pti指针
	short index;
	double bills[SIZE];
	double * ptf;
	pti = dates;//数组名是数组首元素的地址，所以可以赋值
	ptf = bills;
	
	printf("%23s %15s\n","short","double");
	for(index = 0;index<SIZE;index++)
		printf("pointers +%d: %10p %10p\n",index,pti+index,ptf+index);
		
	return 0;
}
