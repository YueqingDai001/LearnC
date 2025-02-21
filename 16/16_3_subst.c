#include<stdio.h>
#define PSQR(x) printf("the square of " #x" us %d.\n",((x)*(x)))

int main(void)
{
	int y = 5;
	PSQR(y);
	PSQR(2 + 4);
	
	return 0;
}
