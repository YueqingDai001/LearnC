#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include "tree.h"

char menu(void);
void addpet(Tree *pt);
void droppet(Tree *pt);
void showpets(const Tree *pt);
void findpet(const Tree *pt);
void printiem(Item item);
void uppercase(char * str);
char *s_gets(char *st, int n);

int main(void)
{
	Tree pets;
	char choice;
	
	InitializeTree(&pets);
	while((choice = menu())!='q')
	{
		switch (choice)
		{
			case 'a':addpet(&pets);break;
			case 'l':showpets(&pets);break;
			case 'f':findpets(&pets);break;
			case 'n':printf("%d pets in club \n",TreeItemCount(&pets));
			case 'd':droppet(&pets);break;
			default:puts("Switching error"); 
		}
	}
	DeleteAll(&pets);
	puts("Bye.");
	
	return 0;
}

char


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
