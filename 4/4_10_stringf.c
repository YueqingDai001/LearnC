#include<stdio.h>
#define BLURB "dai yue qing" 

int main(void)
{
	printf("[%2s]\n",BLURB);
	printf("[%24s]\n",BLURB);
	printf("[%24.5s]\n",BLURB);
	printf("[%-24.5s]\n",BLURB);
	return 0;
}
