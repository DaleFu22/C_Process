#include <stdio.h>

int main(void)
{
	int i = 8;
	if(i == 0)
	{
		goto A;
	}
	else
	{
		goto B;
	}
	printf("xxxx\n");
A:printf("i是大于8\n");
  return 0;
B:printf("i是小于8\n");

	return 0;
}
