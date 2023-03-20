#include <stdio.h>

int main(void)
{
	int x = 1,y = 0,z = 0,s;

	s = x+=y==z,y=x+2,z=x+y+x>0;

	printf("x = %d\ny = %d\nz = %d\ns = %d\n",x,y,z,s);

	return 0;
}
