#include<stdio.h>
int main()
{
	int n = 8;
	
	printf(" Initially , n = %d at %p\n",n,&n);
	for(int n = 1;n< 3;n++)
		printf("	loop1:n = %d at %p\n",n,&n);
	printf("after loop 1, n = %d at %p\n",n,&n);
	for (int n = 1;n<3;n++)
	{
		printf("loop 2 index n =%d at %p\n",n,&n);
		int n = 6;
		printf("	loop 2: n = %d at %p\n",n,&n);
		n++; 
	}
	printf("after loop 2, n = %d at %p\n",n,&n);
	
	return 0 ;
} 
