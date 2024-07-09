#include<stdio.h>
int main(void)
{
    const double RENT = 3852.99;

    printf("*%f*\n",RENT); //打印%f 浮点数相应文件
    printf("*%e*\n",RENT);//打印e char字符 
	printf("*%4.2f*\n",RENT);
	printf("*%3.1f*\n",RENT);
	printf("*%10.3f*\n",RENT);
	printf("*%10.3E*\n",RENT);
	printf("*%+4.2f*\n",RENT);
	printf("*%010.2f*\n",RENT);
	
	return 0;
}
