#include<stdio.h>
int main(void)
{
    const double RENT = 3852.99;

    printf("*%f*\n",RENT); //打印%f 浮点数相应文件
    printf("*%e*\n",RENT);//打印e char字符 
	printf("*%4.2f*\n",RENT);//总宽度4为，留2为小数点
	printf("*%3.1f*\n",RENT);//总宽度为3，留1位小数点
	printf("*%10.3f*\n",RENT);//总宽度10  留3为小数点
	printf("*%10.3E*\n",RENT);//总宽度为1，留3为小数点，使用科学计数法输出
	printf("*%+4.2f*\n",RENT);//显示+号 总宽度4，留2位小数
	printf("*%010.2f*\n",RENT);//总宽度多余部分填0
	
	return 0;
}
