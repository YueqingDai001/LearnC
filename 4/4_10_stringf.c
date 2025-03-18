#include<stdio.h>
#define BLURB "dai yue qing" 

int main(void)
{
	printf("[%2s]\n",BLURB);
	printf("[%24s]\n",BLURB);
	printf("[%24.5s]\n",BLURB);//输出。5前五个字符
	printf("[%-24.5s]\n",BLURB);
	return 0;
}
