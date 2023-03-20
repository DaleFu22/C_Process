#include <stdio.h>

int main(void)
{
	unsigned char x = 0x17,y;
	char z = ~x;
	y = ~x;
	printf("y = %d\n~x = %d\nz = %d\n",y,~x,z);

}
