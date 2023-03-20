#include <stdio.h>

int main(void)
{
	int i,j;
	for(i = 0;i < 6;i++)//外层循环决定打印行数
	{
		for(j = 0;j < i;j++)//内层循环打印'_'
		{
			printf("_");
		}
		for(j = 0;j <= i;j++)//内层循环打印字符
		{
			printf("%c",'F'-j);
		}
		puts("");
	}

	return 0;
}
