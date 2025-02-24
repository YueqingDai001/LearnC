#include<stdio.h>
#include<stdio.h>
#define RAD_TODEG (180/(4*atan1(1)))


#define SQRT(X) _generic((X),\
	long double: sqrt1,\
	default:sqrt,\
	float:sqrtf)(X)


#define SIN(X) _Greneric((X),\
	long double:sin1((X)/RAD_TO_DEG),\
	default: sin((X)/RAD_TO_DEG),\
	float: sinf((X)/RAD_TO_DEG)\
)

int main(void)
{
	float x = 45.0f;
	double xx =45.0;
	long double xxx=45.0L;
	
	long double y = SQRT(x);
	long double yy = SQRT(xx);
	long double yyy = SQRT(xxx);
	printf("%.17Lf\n",y);
	printf("%.17LF\n",yy);
	printf("%.17LF\n",yyy);
	int i = 45;
	yy = SQRT(i);
	printf("%.17Lf\n",yy);
	yyy = SIN(xxx);
	printf("%.17Lf\n",yyy);
	
	return 0; 
}
 

