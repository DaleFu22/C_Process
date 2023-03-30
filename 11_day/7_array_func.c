#include <stdio.h>

int fun(int * a, int n);

int main(void)
{
	int a[] = {1, 9, 7, 3, 4, 6, 45, 25};
	int sum = 0;

	sum = fun(a, sizeof(a)/sizeof(int));
	printf("sum=%d\n", sum);

	return 0;
}

int fun(int * a, int n) 
{
	int i, ret = 0;

	for (i = 0; i < n; i++)
   	{
		ret += a[i];
	}

	return ret;
}

