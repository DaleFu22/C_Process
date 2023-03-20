#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int x;
	bool y = false;
	if(y)
		x = 12;
	else
		x = 18;

	printf("x = %d\n",x);

	return 0;
}
