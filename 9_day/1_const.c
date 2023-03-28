#include <stdio.h>

int main(void)
{
//	const int a = 2;
	int const a = 2;
//	a = 4;//不合法，无法修改const修饰的常变量
	//2 = 4;
	int *p = (int *)&a;
	*p = 4;
	printf("a = %d\n",a);

	return 0;
}
