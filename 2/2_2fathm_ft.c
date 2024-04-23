#include<stdio.h>
int main (void)
{
    int feet,fathoms;//定义变量英尺和英寸
    fathoms = 2;
    feet  = 6* fathoms;
    printf("这里是%d英尺在%d英寻\n",feet,fathoms);
    printf("我说这个是%d英尺！",6*fathoms);
    return 0;
}
