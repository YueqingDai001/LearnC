#include<stdio.h>
#include<stdbool.h>
long get_long(void);
bool bad_limits(long begin,long end,long low,long high);

double sum_squares(long a,long b);
int main(void)
{
	const long MIN = -10000000L;
	const long MAX = +10000000L;
	
	long start;
	long stop;
	double answer;
	
	printf("this program computes the sum of the squares of"
			"integers in a range.\n the lower bound should not"
			"be less than -10000000 and \n the upper bound"
			"should not be more than +10000000 \nenter the"
			"limits (enter 0 for both limits to quit ):\n"
			"lower limit: ");
	start = get_long();
	printf("upper limit:");
	stop = get_long();
	while(start !=0 || stop!=0)
	{
		if(bad_limits(start,stop,MIN,MAX))
			printf("please try again,\n");
		else
		{
			answer =  (start,stop);
			printf("the sum of the squares of the integers");
			printf("form %1d to %1d is %g\n",start,stop,answer);
		}
		printf("enter the limits(enter 0 for both"
				"linits to quit ):\n");
		printf("lower limit:");
		start = get_long();
		printf("upper limit: ");
		stop = get_long();
	}
	printf("done\n");
	return 0;
}
long get_long(void)
{
	long input;
	char ch;
	while(scanf("%1d",&input)!=1)
	{
		while((ch = getchar())!='\n')
			putchar(ch);
		printf("is  not an intger\n please enter an ");
		printf("integer value ,such as 25,-78,or 3:");
	}
	return input;
}

bool bad_limits(long begin,long end,long low,long high)
{
	int  not_good = 0;
	if (begin >end)
	{
		printf("%1d isn't smaller than %1d\n",begin,end);
		not_good = 1;
	}
	if(begin<low||end<low)
	{
		printf("values must be %1d or greater .\n",low);
		not_good = 1;
	}
	if(begin>high||end>high)
	{
		printf("values must be %ld or lesss\n",high);
		not_good = 1;
	}
	return not_good;
}
