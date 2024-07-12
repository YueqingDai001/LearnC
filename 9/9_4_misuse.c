#include<stdio.h>
int imax();

int main(void)
{
	printf("the maximun of %d and %d is %d\n",3,5,imax(3));
	printf("the maximun of %d and %d us %d\n",3,5,imax(3.0,5.0));
	
	return 0;
}

int imax(n,m)
int n,m;
{
	return(n>m?n:m);
	
}
