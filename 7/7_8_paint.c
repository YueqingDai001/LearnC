#include<stdio.h>
#define COVERAGE 350
int main(void)
{
	int sq_feet;
	int cans;
	
	printf("enter number of square feet to be painted:\n");
	while(scanf("%d",&sq_feet)==1)
	{
		cans = sq_feet/COVERAGE;
		cans += ((sq_feet% COVERAGE ==0))? 0:1;
		printf("you need %d %s of paint\n",cans,cans ==1?"can":"cans");
		printf("enter next value (q to quit ):\n");
		
	 } 
	 return 0;
}
