#include <stdio.h>

void func(int *p,int *q);

int main(void)
{
	int a = 3,b = 4;

	printf("a = %d\tb = %d\n",a,b);
	func(&a,&b);
	printf("a = %d\tb = %d\n",a,b);
	return 0;
}

void func(int *p,int* q)
{
	*p = 666;
	*q = 888;
}
