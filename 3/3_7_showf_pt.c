#include<stdio.h>
int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;//科学计数法  浮点数
	long double dip = 5.32e-5;
	
	printf("%f can be written %e\n",aboat,aboat);
	printf("And it's %a in hexadecimal ,powers of 2 notation\n",aboat);
	printf("%f can be written %e\n",abet,abet);
	printf("%Lf can be written %Le\n",dip,dip);//对应的数据类型 需要靠对应的关键字进行输出需要记录下
	
	return 0;
}
