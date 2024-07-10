#include<stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;
	printf("test\n");
	printf("enter secret code number :");
	scanf("%d",&code_entered);
	while(code_entered!= secret_code)
	{
		printf("therapy club\n");
		printf("enter secret code:");
		scanf("%d",&code_entered);
	}
	printf("finsish \n");
	return 0;
}
