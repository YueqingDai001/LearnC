#include<stdio.h>
#include<string.h>
#define TSIZE 45
#define FMAX 5

struct film{
	char title[TSIZE];
	int rating;
};

char *s_gets(char str[],int lim);

int main(void)

{
	struct film movies[FMAX];
	int i = 0;
	int j;
	
	puts("enter first movie title: ");
	while(i<FMAX && s_gets(movies[i].title,TSIZE) != NULL &&
		movies[i].title[0]!='\0')
	{
		puts("enter your rating <0-10>:");
		scanf("%d",&movies[i++].rating);
		while(getchar()!='\n')
			continue;
		puts("enter next movie title (empty line to stop):");
	}
	if(i ==0 )
		printf("no data entered.");
	else
		printf("here is the movie list:\n");
	for(j =0;j<i;j++)
		printf("Movie: %s rating: %d\n",movies[j].title,movies[j].title);
	printf("bye~\n");
	
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
