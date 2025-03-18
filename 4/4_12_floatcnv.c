#include<stdio.h>
int main(void)
{
	float n1 = 3.0;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;
	
	
	printf("%.1e %.1e %.1e %.1e\n",n1,n2,n3,n4);//浮点数打印，一位小数点
	printf("%ld %ld\n",n3,n4);//类型匹配会正确输出
	printf("%ld %ld %ld %ld \n",n1,n2,n3,n4);//n1 n2 类型不匹配
	return 0;
 } 
