#include <stdio.h>
#include <string.h>

int main(void)
{
	char p[] = "Hello";
	char *q = " World";
	strcat(p,q);

	printf("%s\n",p);

	return 0;
}
