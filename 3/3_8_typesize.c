#include<stdio.h>
int main(void)
{
	//c99提供了%zd转换类型
	printf("Type size int has a size of %zd bytes.\n",sizeof(int));
	printf("Type size char has a size of %zd bytes.\n",sizeof(char));
	printf("Type size long has a size of %zd bytes.\n",sizeof(long));
	printf("Type size long long has a size of %zd bytes.\n",sizeof(long long));
	printf("Type size double has a size of %zd bytes.\n",sizeof(double));
	printf("Type size long double has a size of %zd bytes.\n",sizeof(long double));
	return 0;
}
