#include<stdio.h>
#define FUNDLEN 50
#define N 2

struct funds{
	char bank[FUNDLEN];
	double backfund;
	char save[FUNDLEN];
	double savefund;
}; 

double sum(const struct funds money [],int n);

int main(void)
{
	struct funds jones[N] = {
	{
		"garlic-melon bank",
		4032.27,
		"lucky's savings and loan",
		8543.94
	},
	{
		"honest jack's bank",
		3620.88,
		"party time savings",
		3802.91
	}
};
	printf("the joneses have a hotel of $%.2f.\n",sum(jones,N));
	
	return 0 ;
	
}

double sum(const struct funds money [],int n)
{
	double total;
	int i;
	for (i = 0,total = 0;i<n;i++)
			total += money[i].backfund+money[i].savefund;
	return(total);
}
