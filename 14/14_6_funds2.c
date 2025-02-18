#include<stdio.h>
#define FUNDLEN 50

struct funds{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
}; 

double sum(const struct funds*);

int main(void)
{
	struct funds stan = {
		"garlic-melon bank",
		4032.27,
		"Luck's savings and Loan",
		8543.94
	};
	
	
	printf("stan has a total of $%.2f.\n",sum(&stan));
	return 0;
}

double sum(const struct funds *money)
{
	return (money->bankfund + money->savefund);
}
