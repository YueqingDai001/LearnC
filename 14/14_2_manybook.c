#include<stdio.h>
#include<string.h>
char *s_gets(char *st, int n); 
#define MAXTITL 41
#define MAXAUTL 31
#define MAXBKS 100
 

struct book{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value; 
};

int  main(void)
{
	struct book library[MAXBKS];
	int count = 0;
	int index;
	
		
	printf("Please enter the book title.\n");
	printf("press [Enter] at the start of a line to stop.\n");
	while(count<MAXBKS && s_gets(library[count].title,MAXTITL)!= NULL && library[count].title[0] !='\0')
	{
		printf("now enter the author.\n");
		s_gets(library[count].author,MAXAUTL);
		printf("now enter the value.\n");
		scanf("%f",&library[count++].value);
		while(getchar()!='\n')
			continue;
		if(count<MAXBKS)
			printf("enter the next title.\n");
	}
	if(count>0)
	{
		printf("here is the list of your books:\n");
		for(index = 0;index<count;index++)
			printf("%s by %s: $%.2f\n",library[index].title,library[index].author,library[index].value); 
	}
	else
		printf("no books? too bad.\n");
	
	
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
