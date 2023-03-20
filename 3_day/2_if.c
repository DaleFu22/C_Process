#include <stdio.h>

int main(void)
{
	int i = 1,j = 2;
	if(i > 0)
		printf("aaa\n");
	else
		if(j > i)
			printf("bbb\n");
		else if(i < j)
			printf("ccc\n");
}
