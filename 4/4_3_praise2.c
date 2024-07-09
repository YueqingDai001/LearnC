#include<stdio.h>
#include<string.h>
#define PARISE "You are an extraordinary being."
int main(void)
{
    char name[40];
    printf("What's your name?");
    scanf("%s",name);
    printf("Hello, %s. %s\n",name,PARISE);
    printf("Your name of %zd letters occupies %zd menory cells.\n",
               strlen(name),sizeof name);
    printf("The phrase of praise has %zd letters ",
            strlen(PARISE));
    printf("and occupies %zd memory cells.\n",sizeof PARISE);
    return 0;
}
