#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int a[6] = {9,2,3,4,5,6};

	printf("%ld\n",&a[5] - &a[0]);
	bool flag;
	flag = &a[0] > &a[5];
	printf("flag = %d\n",flag);

	return 0;
}

