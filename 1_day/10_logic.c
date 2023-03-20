#include <stdio.h>

int main(void)
{
	int a = 1,b = 2,c;

	c = (b += 1) || ( (a=a-1) < 0);
	printf("a = %d\tb = %d\tc = %d\n",a,b,c);

	return 0;
}
