#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 41

int main(void)
{
	FILE *fp;
	char words[MAX];
	if ((fp = fopen("wordy","a++"))==NULL)
	{
		fprintf(stdout,"can't  open\"wordy\" file.\n");
		exit(EXIT_FAILURE);
	 } 
	puts("enter words to add to the file,press the #");
	puts("key at the beginning of a line to terminate.");
	while((fscanf(stdin,"%40s",words)==1)&& (words[0]!='#'))
		fprintf(fp,"%s\n",words); 
	
	puts("File contents:");
	rewind(fp);
	while(fscanf(fp,"%s",words)==1)
		puts(words);
	puts("Done!");
	if(fclose(fp)!=0)
		fprintf(stderr,"Error closing file\n");
		
	return 0; 
}
