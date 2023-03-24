#include <stdio.h>

int main(void)
{
	int a[6] = {1,2,3,4,5,6};
	int *p = a;

	printf("p = %p\n",p);
	printf("&a = %p\n",&a);
	printf("p+1 = %p\n",p+1);
	printf("&a+1 = %p\n",&a+1);

	return 0;
}
