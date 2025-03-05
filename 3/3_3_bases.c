#include<stdio.h>
int main(void)
{
	int x = 100;
	
	printf("dec = %d, octal = %o,hex = %x\n",x,x,x);//不带符号，前缀
	printf("dec = %d, octal = %#o,hex =%#x\n ",x,x,x);//带符号
	
	return 0 ;
}
