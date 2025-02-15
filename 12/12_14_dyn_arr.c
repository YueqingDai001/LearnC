#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double *ptd;
	int max;
	int number;
	int i = 0;
	
	puts("what is the maximum number of type double entries?");
	if (scanf("%d",&max)!= 1)
	{
		puts("number not correctly entered -- bye.");
		exit(EXIT_FAILURE);
	}
	ptd = (double *) malloc(max *sizeof(double));
	if(ptd ==NULL)
	{
		puts("Menory allocation failed.goodbey.");
		exit(EXIT_FAILURE);
	}
	puts("enter the values(q to quit):");
	while(i<max && scanf("%lf",&ptd[i])==1)
		++i;
	printf("here are your %d entries:\n",number = i);
	for (i = 0;i<number;i++)
	{
		printf("%7.2f",ptd[i]);
		if (i% 7==6)
			putchar('\n');
			 
	}
	if (i%7!=0)
		putchar('\n');
	puts("Done.");
	free(ptd);
	
	return 0;
}
