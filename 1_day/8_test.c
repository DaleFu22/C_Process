#include <stdio.h>

int main(void)
{
	unsigned char x = 0x17;
	char y = ~x;
	printf("y = %d\n~x = %d\n",y,~x);

	return 0;
}
