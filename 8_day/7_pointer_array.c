#include <stdio.h>

int main(void)
{
	int a[2][3] = {1,2,3,4,5,6};
	int *p[2] = {a[0],a[1]};
	int **q = p;

	printf("q = %p\n",q);
	printf("&p[0] = %p\n",&p[0]);
	printf("sizeof(p) = %lu\n",sizeof(p));
	printf("p[0] = %p\n",p[0]);
	printf("p[1] = %p\n",p[1]);
	printf("&a[0][0] = %p\n",&a[0][0]);
	printf("&a[1][0] = %p\n",&a[1][0]);

	return 0;
}
