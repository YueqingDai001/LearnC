#include<stdio.h>
#define ANSWER "Grant"
#define SIZE 40
char *s_gets(char *st, int n);

int main(void)
{
	char try[SIZE];
	
	puts("who is buried in grant's tomb?'");
	s_gets(try,SIZE);
	while(try != ANSWER)
	{
		puts("no, that's wrong. try again.");
		s_gets(try,SIZE);
	}
	puts("that's right!");
	
	return 0;
 } 
char * s_gets(char *st,int n)
{
	char *ret_val;
	int i = 0;
	
	ret_val = fgets(st,n,stdin);
	if (ret_val)
	{
		while (st[i] != '\n'&& st[i]!= '\0')
		  i++;
		if (st[i]=='\n')
			st[i] ='\0';
		else
		    while(getchar() !='\n')
		    	continue;
	}
	return ret_val;
 } 
