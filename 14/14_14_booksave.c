#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10


char *s_gets(char *st, int n); 

struct book{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
}; 

int main(void)
{
	struct book library[MAXBKS];
	int count = 0;
	int index,filecount;
	FILE * pbooks;
	int size = sizeof(struct book);
	if((pbooks =fopen("book.dat","a+b"))==NULL)
	{
		fputs("can't open book.dat file\n",stderr);
		exit(1);
	}
	rewind(pbooks);
	while(count <MAXBKS && fread(&library[count],size,1,pbooks)==1)
	{
		if(count ==0)
		puts("current contents of book.dat:");
	printf("%s by %s :$%.2f\n",library[count].title,library[count].author,library[count].value);
	count ++;
	
	}
	filecount = count;
	if(count ==MAXBKS)
	{
		fputs("the book,dat file is full.\n",stderr);
		exit(2);
	 } 
	 puts("please add new book titles.");
	 puts("press enter at the start of a line  to stop.");
	 while(count<MAXBKS && s_gets(library[count].title,MAXTITL)!=NULL && libarary[count].title[0]!='\n')
	 	{
	 		puts("now enter the author .");
	 		s_gets(library[count].author,MAXAUTL) ;
	 		puts("now enter the value.");
	 		scanf("%f",&library[count++].value);
	 		while(getchar()!= '\n')
	 			continue;
	 		if(count<MAXBKS)
	 			puts("enter the next title.");
		 }
		 
		 if(count>0)
		 {
		 	puts("here is the list of your books:");
		 	for(index=0;index<count;index++)
		 		printf("%s by %s:$%.2f\n",library[index].title,library[index].author,library[index].value);
		 	fwrite(&library[filecount],size,count - filecount,pbooks);
		 	
		 }
		 else 
		 	puts("no books? too bad.\n");
		puts("bye.\n");
		fclose(pbooks);
		
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
