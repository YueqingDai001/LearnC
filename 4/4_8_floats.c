#include<stdio.h>
int main(void)
{
    const double RENT = 3852.99;

    printf("*%f*\n",RENT); //��ӡ%f ��������Ӧ�ļ�
    printf("*%e*\n",RENT);//��ӡe char�ַ� 
	printf("*%4.2f*\n",RENT);
	printf("*%3.1f*\n",RENT);
	printf("*%10.3f*\n",RENT);
	printf("*%10.3E*\n",RENT);
	printf("*%+4.2f*\n",RENT);
	printf("*%010.2f*\n",RENT);
	
	return 0;
}
