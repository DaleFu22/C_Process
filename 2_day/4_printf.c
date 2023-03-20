#include <stdio.h>

int main(void)
{
	printf("%10d\n",123);
	printf("%.3f\n",3.1415926535);
	printf("%.3s\n","hello world");
	printf("%010d\n",123);

	printf("%#x\n",3);
	printf("%#o\n",3);
	printf("%d\n",3);

	return 0;
}
