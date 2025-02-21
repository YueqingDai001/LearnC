#include<stdio.h>
#define SQUARE(X) X*X
#define PR(X) printf("the result is %d.\n",X)
int main(void)
{
	int x = 5;
	int z;
	
	printf("x = %d\n",x);
	z = SQUARE(x);
	printf("evaluating AQUARE(x):");
	PR(z);
	z = SQUARE(2);
	printf("evaluating AQUARE(2):");
	PR(z);
	printf("evaluating AQUARE(x+2):");
	PR(SQUARE(x+2));
	printf("evaluating 100/AQUARE(2):");
	PR(100/SQUARE(2));
	printf("x is %d.\n",x);
	printf("evaluating AQUARE(++x):");
	PR(SQUARE(++x));
	printf("after incrementing,x is %x.\n",x);
	
	return 0; 
}
