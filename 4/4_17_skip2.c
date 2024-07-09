#include<stdio.h>
int main(void)
{
	int n;
	
	printf("输入三个整形\n");
	scanf("%*d %*d %d",&n) ;
	printf("最会一个是：%d\n",n);
	
	return 0;
	
}
