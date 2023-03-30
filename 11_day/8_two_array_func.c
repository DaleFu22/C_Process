/*
 *传递二维数组元素,复制传递
 */

#include <stdio.h>

void func(int n);

int main(void)
{
	int i,j;
	int a[][3] = {1,2,3,4,5,6};
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			func(a[i][j]);
		}
	}
	puts("");

	return 0;
}

void func(int n)
{
	printf("%d\t",n);
}
