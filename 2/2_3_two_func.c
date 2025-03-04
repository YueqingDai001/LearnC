#include<stdio.h>
void butler(void);//����ԭ�� 函数原型
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();//调用函数
	printf("Yes, bring me some tea and writeable DVDs.\n");
	return 0;
 } 
 
 void butler(void)//�������� 函数定义
 {
 	printf("You rang, sir?\n");
 }
