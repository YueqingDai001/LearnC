#include<stdio.h>
int main(void)
{
    const double RENT = 3852.99;

    printf("*%f*\n",RENT); //��ӡ%f ��������Ӧ�ļ�
    printf("*%e*\n",RENT);//��ӡe char�ַ� 
	printf("*%4.2f*\n",RENT);//�ܿ��4Ϊ����2ΪС����
	printf("*%3.1f*\n",RENT);//�ܿ��Ϊ3����1λС����
	printf("*%10.3f*\n",RENT);//�ܿ��10  ��3ΪС����
	printf("*%10.3E*\n",RENT);//�ܿ��Ϊ1����3ΪС���㣬ʹ�ÿ�ѧ���������
	printf("*%+4.2f*\n",RENT);//��ʾ+�� �ܿ��4����2λС��
	printf("*%010.2f*\n",RENT);//�ܿ�ȶ��ಿ����0
	
	return 0;
}
