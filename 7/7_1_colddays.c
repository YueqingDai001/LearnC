#include<stdio.h>
int main(void)
{
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;
	
	printf("enter the list of daily low temperature.\n");
	printf("use celsius,and enter q to quit.\n");
	while(scanf("%d",&temperature)==1)
	{
		all_days++;
		if(temperature<FREEZING)
			cold_days++;	
	}
	if(all_days !=0)
		printf("%d days total%.1f%% ware below freezing.\n",all_days,100.0*(float)cold_days/all_days);
	if(all_days ==0)
		printf("NO data entered\n");
		
	return 0;
	
}
