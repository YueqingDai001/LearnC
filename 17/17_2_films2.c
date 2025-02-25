#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TSIZE 45

struct film{
	char title[TSIZE];
	int ranting;
	struct film *next;
};

char *s_gets(char *st,int lim);

int main(void)
{
	struct film *head =NULL;
	struct film *prev, *current;
	char input[TSIZE];
	
	puts("enter first movie title :");
	while (s_gets(input,TSIZE) != NULL && input[0] != '\0')
	{
		current = (struct film *)malloc(sizeof(struct film));
		if(head ==NULL)
			head = current;
		else 
			prev->next = current;
		current->next = NULL;
		strcpy(current->title,input);
		puts("enter your rating <0-10>:");
		scanf("%d",&current->ranting);
		while(getchar() != '\n')
			continue;
		puts("enter next movie title (empty line to stop):");
		prev = current;
	}
	if(head ==NULL)
		printf("no data entered.")
	else 
		printf("here is the movie list:\n");
	current = head;
	while(current !=NULL)
	{
		printf("movie : %s rating :%d",current->title,currnet->rating);
		current = current->next;
	}
	current = head;
	while(current !=NULL)
	{
		current = head;
		head = current->next;
		free(current);
	}
	printf("bye\n");
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
