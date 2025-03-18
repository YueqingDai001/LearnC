#include<stdio.h>
#define PAGES 959
int main(void)
{
    printf("*%d*\n",PAGES);//无变化
    printf("*%2d*\n",PAGES);//最小宽度为2 所以没变化
    printf("*%10d*\n",PAGES);//最小宽度是10 所以在左边添加9个空格
    printf("*%-10d*\n",PAGES);//-左对齐
    
    return 0;
}