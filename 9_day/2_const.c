#include <stdio.h>

int main(void)
{
	int a = 8;
	int b = 666;
#if 0
//	const int *p = &a;//p能变，*p不能变
	int const *p = &a;//p能变，*p不能变
//	*p = 9;//不合法
	p = &b;
	printf("*p = %d\n",*p);
#endif
#if 0
	int *const p = &a;//p不能变，*p能变
//	p = &b;//不合法
	*p = 999;
	printf("*p = %d\n",*p);
#endif
	int const * const p = &a;
	p = &b;
	*p = 999;
	printf("*p = %d\n",*p);
}
