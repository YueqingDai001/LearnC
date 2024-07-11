#include<stdio.h>
void display(char cr,int lines,int width);
int main(void)
{
	int ch;
	int rows,cols;
	printf("enter a character and two integers:\n");
	while((ch =getchar())!='\n')
	{
		scanf("%d %d",&rows,&cols);
		display(ch,rows,cols);
		printf("enter another character and two integers;\n");
		printf("enter a newline to quit,\n");
		
	}
	printf("bye\n");
	
	return 0;
}

void display(char cr,int lines,int width)
{
	int row,col;
	for(row = 1;row<=lines;row++)
	{
		for(col = 1;row<= lines;row++)
			putchar(cr);
		putchar('\n');
	}
}


