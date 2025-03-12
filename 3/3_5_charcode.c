#include<stdio.h>
int main(void)
{
	char ch;//char 类型
	
	printf("Please enter a character.\n");
	scanf("%c",&ch);//%c  用来输出char 字符型
	printf("The code for %c is %d.\n",ch,ch);//显示字符  显示asc11 码 数字
	
	return 0;
}
