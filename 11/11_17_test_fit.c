#include<stdio.h>
#include<stdio.h>
void fit(char *,unsigned int);

int main(void)
{
	char mesg [] = "Things should be as simple as possible,"
							" but not simpler.";
	puts(mesg);
	fit(mesg,38);
	puts("Let's look at some more of the string.");
	puts(mesg + 39);
	
	return 0;
}



void fit(char *string,unsigned int size)
{
	if (strlen(string)>size)
	   string[size] = '\0';
}
