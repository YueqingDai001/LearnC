#include<stdio.h>
int imin(int ,int );

int main(void)
{
	int evil1,evil2;
	
	printf("enter a paor of integers (q to quit):\n");
	while(scanf("%d %d",&evil1,&evil2)==2)
	{
		printf("the lesser of %d and %d is %d\n",evil1,evil2,imin(evil1,evil2));
		printf("enter a pair of integers (Q TO quit ):\n");
	}
	printf("bey \n");
	return 0;
}




int imin(int n,int m)
{
	int min;
	if(n<m)
		min = n;
	else
		min = m;
	
	return min;
}
