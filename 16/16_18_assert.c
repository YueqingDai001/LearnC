#include<stdio.h>
#include<math.h>
#include<assert.h>
int main()
{
	double x,y,z;
	puts("enter a pair of numbers (0 0 to quit):");
	while(scanf("%1f%1f",&x,&y)==2
		&& (x !=0 || y !=0))
	{
		z = x* x - y*y;
		assert(z>=0);
		printf("answer is %f \n",sqrt(z));
		puts("next pair of numbers:");
	}
	puts("done");
	
	return 0;
}
