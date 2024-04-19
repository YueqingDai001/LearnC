#include<stdio.h>
int main (void)
{
	int dogs;
	
	printf("你有几只狗？\n");//屏幕打印 
	scanf("%d",&dogs);//键盘获取输入 
	printf("所以你有%d只狗！\n",dogs);//%d 占位符，后面跟上变量 
	
	return 0;
 } 
