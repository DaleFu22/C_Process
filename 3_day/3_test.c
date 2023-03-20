#include <stdio.h>

int main(void)
{
	int a = 3,b = 5,c = 6,d = 0,z;
	z = (a > b) ? a : (b += 1) > 6 ? c : d;
	printf("z = %d\n",z);

	return 0;
}
