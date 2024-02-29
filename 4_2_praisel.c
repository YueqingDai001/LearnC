#include<stdio.h>
#define PARISE "You are an extraordinary being."
int main(void)
{
    char name[40];
    printf("What's your name?");
    scanf("%s",name);
    printf("Hello,%s. %s\n",name,PARISE);
    return 0;
}

