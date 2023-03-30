#include <stdio.h>

int  fun(int n, int m, int (*a)[m]);

int main(void)
{
	int a[][3] = {{1, 9, 7}, {3, 4, 6}};
	int sum = 0;

	sum = fun(2, 3, a);
	printf("sum=%d\n", sum);

	return 0;
}

int  fun(int n, int m, int (*a)[m])
{
	int i, j, ret = 0;

	for (i = 0; i < n; i++)
   	{
		for (j = 0; j < m; j++)
	   	{
			ret += a[i][j];
		}
	}

	return ret;
}

