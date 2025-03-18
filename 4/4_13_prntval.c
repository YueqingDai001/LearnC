#include<stdio.h>
int main(void)
{
	int bph2o =212;
	int rv;
	
	rv = printf("%d F is water's boiling point .\n",bph2o);
	printf("The printf() fuction printed %d characters.\n",rv);//printf输出是什么，然后计算输出的字符数
	
	return 0;
}
