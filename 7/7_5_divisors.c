#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	unsigned long num;
	unsigned long div;
	int isPrime;
	
	printf("please enter an interger  for analysis;");
	printf("enter q to quit \n");
	while(scanf ("%lu",&num))
	{
		for (div = 2,isPrime = 1;(div*div)<=num;div++)
		{
			if (num % div ==0)
			{
				if ((div*div)!= num )
				printf("%lu is divisible by %lu and %lu.\n",num,div,num/div);
				else
					printf("%lu is 	divisible by %lu.\n",num,div);
				isPrime = 0;
			}
		}
		if (isPrime)
			printf("%lu is prime.\n",num);
	    printf("please enter another integer for analysis;");
	    printf("enter q to quit .\n");
	}
	printf("Bye,\n");
	return 0;
}
