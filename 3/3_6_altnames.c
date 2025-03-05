#include<stdio.h>
#include<inttypes.h> //限制类型
int main(void)
{
	int32_t me32;
	
	me32 = 45933954;
	printf("First,assume int32_t is int: ");
	printf("me32 = %d\n",me32);
	printf("Next,Let's not make any assumptions.\n ");
	printf("Instead, use a \"macro\" from inttypes.h: ");
	printf("me32 = %"PRId32"\n",me32);
	
	return 0;
}
