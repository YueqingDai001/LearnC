#include<stdio.h>
int main(void)
{
	float salary;
	
	printf("\aEnter your desired montly salary:");
	printf("$__________\b\b\b\b\b\b\b");// 使用转义字符进行输出
	scanf("%f",&salary);
	printf("\n\t$%f.2f a month is $%.2f a year .",salary,salary * 12);//转义字符
	printf("\rGee!\n");
	
	return 0;
	 
}
