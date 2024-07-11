#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	
	printf("give me a letter of the alphabet ,and  i will give");
	printf("an animal name\n beginning with that letter.\n");
	printf(" please type in a letter ;type# to end my act.\n");
	while((ch = getchar())!='#')
	{
		if('\n'==ch)
			continue;
		if (islower(ch))
			switch(ch)
		{
			case 'a':
				printf("argali,a wild sheep of asia\n");
				break;
			case 'b':
				printf("babirusa, a wild pig of malay\n");
				break;
			case 'c':
				printf("coati,racoonlike mammal\n");
				break;
			case 'd':
				printf("desman, aquatic, molelike critter\n");
				break;
			case 'e':
				printf("echidna,the spiny anteater\n");
				break;
			case 'f':
				printf("fisher,brownish marten\n");
				break;
			default:
				printf("that is a stumper!\n");
				
		}
		else
			printf("i recoognize only lowercase letters.\n");
		while(getchar()!='\n')
			continue;
		
		printf("please type another letter or a#.\n");
	}
	printf("bye\n");
	return 0;
}
