#include<stdio.h>
int main(void)
{
	char name1[11],name2[11];
	int count;
	
	printf("please enter 2 names.\n");
	count = scanf("%5s %10s", name1,name2);
	printf("i read the %d names %s and %s,\n",count,name1,name2);
	
	return 0;
}
