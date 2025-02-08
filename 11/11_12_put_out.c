#include<stdio.h>
#define DEF "i am a #defined string."
int main(void)
{
	char str1[80] = "an array was initialized to me.";
	const char *str2 = "a pointer was initialized to me.";
	
	puts("i'm and argument to puts().");
	puts(DEF);
	puts(str1);
	puts(str2);
	puts(&str1[5]);
	puts(str2+4);
	
	return  0;
}
