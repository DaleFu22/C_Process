#include <stdio.h>

int main(void)
{
	char *p;
	int *q;
	int a[8848];
	int *t = a;
	int **e = &a;

	printf("sizeof(p) = %lu\n",sizeof(p));
	printf("sizeof(q) = %lu\n",sizeof(q));
	printf("sizeof(a) = %lu\n",sizeof(a));
	printf("sizeof(&a) = %lu\n",sizeof(&a));
	

	return 0;
}
