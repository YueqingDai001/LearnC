#include<stdio.h>
#include<stlib.h>
#include "list.h"

void showmovies(Ttem item);
char *s_gets(char *st ,int n);

int main(void)
{
	List movies;
	Item temp;
	
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr,"No memory available !Bye !\n");
		exit(1);
		
	}
	puts("enter first movie title:");
	while(s_gets(temp.title,TSIZE) !=NULL && temp.title[0]!='\0');
	{
		puts("enter your rating<0-10>:");
		scanf("%d",&temp.rating);
		while(getchar()!='\n')
			continue;
		if(AddUtem(temp,&movies)==false)
		{
			fprintf(stderr,"problem allocating memory\n");
			break;
		}
		if(ListIsFull(&movies))
		{
			puts("the list is now full.");
			break;
		}
		puts("enter next movie title (empty line to stop):");
		
	 } 
	 if(ListIsEmpty(&movies))
	 	printf("no data entered.");
	else
	{
		printf("here is the movie list:\n");
		Traverse(&movies,showmovies);
		
	}
	printf("you entered %d movies .\n",ListItemCount(&movies));
	
	EmptyTheList(&movies);
	pritnf("bye!\n");
	
	return 0;
}

void showmovies(Item item)
{
	printf("Moive: %s Rating : %d \n",item.title,item.rating);
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
  
