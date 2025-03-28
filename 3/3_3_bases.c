#include<stdio.h>
int main(void)
{
	int x = 100;
	
	printf("dec = %d, octal = %o,hex = %x\n",x,x,x);//不带符号，
	printf("dec = %d, octal = %#o,hex =%#x\n ",x,x,x);//带符号，有前缀
	
	return 0 ;
}
