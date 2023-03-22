#include <stdio.h>

int main(void)
{
	int i,j;
	for(i = 0;i < 5;i++)//外层循环为打印的行数
	{
		for(j = 0;j < 4-i;j++)//内层循环为打印的空格
		{
			putchar(' ');
		}
		for(j = 0;j < 2*i+1;j++)
		{
			putchar('*');
		}
		puts("");
	}

	return 0;
}
