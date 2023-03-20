#include <stdio.h>

int main(void)
{
	float x = 10.5,y = 1.8,z = 0;

	z = (x+=5,y = x+0.2);
	printf("x = %f\ty = %f\tz = %f\n",x,y,z);

	z = (x=y=5,x+=1);
	printf("x = %f\ty = %f\tz = %f\n",x,y,z);

	z = (x = 5,y = 6,x+y);
	printf("x = %f\ty = %f\tz = %f\n",x,y,z);
	return 0;
}
