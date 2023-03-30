#include <stdio.h>

void fun(char a[10]);

int main(void)
{
	char a[] = "hello";
	fun(&a[0]);

	return 0;
}

void fun(char a[10])
{
	long unsigned int i = sizeof(a);
	char c = a[3];
	printf("%lu\n",i);
	printf("%c\n",c);
}
