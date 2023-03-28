#include <stdio.h>

int main(void)
{
	char ch[] = {"abc\0okf"},*p=ch;
	printf("%c\n",*p+4);//相当于'a'+4

	return 0;
}
