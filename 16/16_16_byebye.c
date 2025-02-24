#include<stdio.h>
#include<stdlib.h>
void sign_off(void);
void too_bad(void);

int main(void)
{
	int n;
	
	atexit(sign_off);
	puts("enter an integer:");
	if (scanf("%d",&n)!=1)
	{
		puts("that's no integer!");
		atexit(too_bad);
		exit(EXIT_FAILURE);
	}
	printf("%d is %s.\n",n,(n%2==0)?"even" :"odd");
	
	return 0;
}

void sign_off(void)
{
	puts("thus terminates another magnificent progtam from");
	puts("seesaw software!");
}

void too_bad(void)
{
	puts("seesaw software extends its heartfelt condolences");
	puts("to you upon the failure of your program.");
}
