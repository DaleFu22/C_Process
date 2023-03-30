#include <stdio.h>

void fun(char a[10])
{
	char c = a[3];
}

int main(void)
{
	char b[10] = "abcdefg";
	fun(&b[10]);

	return 0;
}
