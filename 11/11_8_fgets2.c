#include<stdio.h>
#define STLEN 10
int main(void)
{
	char words[STLEN];
	puts("Enter starings (empty line to quit):");
	while(fgets(words,STLEN,stdin)!=NULL &&	words[0]!='\n')
		fputs(words,stdout);
	puts("Done.");
	
	
	return 0;
}
