#include<stdio.h>
int main(void)
{
	int times = 5;
	char ch ='!';
	int f = 6;
	
	
	pound(times);
	pound(ch);
	pound(f);
	
	return 0;
}

void pound(int n)
{
	while(n-- >0)
		printf("#");
	printf("\n");
}
//25-3-25