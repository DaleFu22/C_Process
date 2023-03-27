#include <stdio.h>

int main(void)
{
	char *p = "Hello";
	printf("%s\n",p);
//	*p = 'd';//不允许的操作，试图改变只读存储区的值

	printf("%s\n",p);

	return 0;
}
