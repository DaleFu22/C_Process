#include <stdio.h>

void array_func(int n);

int main(void)
{
	int i;
	int a[6] = {1,3,6,8,0,2};
	for(i = 0;i < 6;i++)
	{
		array_func(a[i]);
	}
	puts("");

	return 0;
}

void array_func(int n)
{
	printf("%d\t",n);
}
