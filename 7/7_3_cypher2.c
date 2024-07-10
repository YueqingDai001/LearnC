#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	while((ch = getchar())!='\n')
	{
		if(isalpha(ch))//ru guo shi yi ge zifu
			putchar(ch +1);//xianshi gai zi fu de xia yi ge zifu
		else
			putchar(ch);// yuan yang xian shi
	}
	putchar(ch);
	
	return 0;
}
