#include<stdio.h>
#include<string.h>
#include<stdbool.h>

char *s_gets(char *st, int n);

enum spectrum {
	red,orange,yellow,green,blue,violet
};
const char * colors [] ={"red","orange","yellow","green","blue","violet"};
#define LEN 30

int main(void)
{
	char choice[LEN];
	emun spectrum color;
	bool color_is_found = false;
	
	puts("enter a color (empty line to quit):");
	while(s_gets(choice,LEN)!=NULL && choice[0]!='\0')
	{
		for(color = red;color<=violet;color++)
		{
			if(strcmp(choice,colors[color])==0)
			{
				color_is_found = true;
				break; 
			}
		}
		if(color_is_found)
			switch(color)
			{
				case red:puts("roses are red.");
					break;
				case orange:puts("poppies are orange.");
					break;
				case yellow:puts("sunflower are yellow.");
					break;
				case green:puts("gress is green.");
					break;
				case blue:puts("bluebells are blue.");
					break;
				case violet:puts("violets are violet");
					break;
			}
			else
				printf("i don't know about the color %s.\n",choice);
			color_is_found = false;
			puts("next color ,please (empty line to quit):");
		}
		puts("goodbye!");
		return 0;
	 } 
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
