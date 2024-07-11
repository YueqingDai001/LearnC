#include<stdio.h>
int main(void)
{
	int guess =1;
	
	printf("pick an integer form 1 to 100, i will  try to guess");
	printf("it.\n respond with a y if my guess is right and with");
	printf("\nan n if it is wrong.\n");
	printf("Uh...is your number %d?\n",guess);
	while(getchar()!='y')
		printf("well, then ,is it %d?\n",++guess);
	printf("I knew  i could do it!\n");
	
	return 0;
}
