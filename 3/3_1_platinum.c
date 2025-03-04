#include<stdio.h>
int main(void)
{
	float weight;//浮点数
	float value;
	
	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out\n");
	printf("Please enter your weight in pounds: ");
	
	scanf("%d",&weight);
	
	value = 1700 * weight *14.5833;
	
	printf("Your weight in platinum is worth $%.2f.\n",value);//控制精度输出2位
	printf("You are easy worth that ! if  platinum prices drop,\n");
	printf("eat more to maintain your value.\n");
	
	return 0;
 } 
