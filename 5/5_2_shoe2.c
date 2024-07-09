#include<stdio.h>
#define ADJUST 7.31
int main(void)
{
	const double SCALE = 0.333;
	double shoe,foot;
	printf("鞋子的尺寸    鞋子的长度\n");
	shoe = 3.0;
	while (shoe<18.5)
	{
		foot = SCALE *shoe + ADJUST;
		printf("%10.1f %15.2f inches\n",shoe,foot);
		shoe = shoe +1.0;
	}
	printf("如果鞋子合脚，穿上它。\n");
	
	return 0;
}
