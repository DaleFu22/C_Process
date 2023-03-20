#include <stdio.h>

int main(void)
{
	int a = 666;
	char *b = NULL;
	int *c = &a;
	printf("sizeof(a) = %lu\n",sizeof(a));
	printf("sizeof(int) = %lu\n",sizeof(int));
	printf("sizeof(b) = %lu\n",sizeof(b));
	printf("sizeof(char *) = %lu\n",sizeof(char *));

	return 0;
}
