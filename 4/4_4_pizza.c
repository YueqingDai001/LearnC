#include<stdio.h>
#define PI 3.14159
int main(void)
{
   float area,circum,radius;//area=面积 circum = 圆周 radius = 半径

   printf("What's  your radius of you pizza?\n");
   scanf("%f",&radius);
   area = PI * radius * radius;
   circum = 2.0 *PI * radius;
   printf("Your basic pizza parameters are as follows:\n");
   printf("circumference = %1.2f,area =%1.2f\n",circum,area );

   return 0;
}
