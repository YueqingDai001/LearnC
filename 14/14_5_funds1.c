#include<stdio.h>
#define FUNDLEN 50

struct funds{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(double,double);

int main(void)
{
	struct funds stan={
		"grlic- melon bank",
		4032.27,
		"lucky's savings and loan",
		8543.94
	};
	
	printf("stan has a total of $%.2f.\n",sum(stan.bankfund,stan.savefund));
	return 0;
}

double sum(double x,double y)
{
	return (x +y);
	
 } 
