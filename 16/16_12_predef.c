#include<stdio.h>
void why_me();

int main()
{
	printf("the file is %s.\n",__FILE__);
	printf("the date is %s.\n",__DATE__);
	printf("the time is %s.\n",__TIME__);
	printf("the version is %ld",__STDC_VERSION__);
	printf("this is line %d.\n",__LINE__);
	printf("this function is %s\n",__func__);
	why_me()
	
	return 0;
}

void why_me()
{
	printf("this function is %s\n",__func__);
	printf("this is line %d.\n",__LINE__);
}
