#include <stdio.h>
#include <strings.h>
#include <string.h>

int main(void)
{
	int i,j;
#if 0
	//全部初始化
	int a[3][2] = {
				   {1,2},
				   {3,4},
				   {5,6}
				  };
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}
#endif
#if 0
	//按排列顺序初始化
	int a[2][3] = {1,2,3,4,5,6};
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}
#endif
#if 0
	int a[2][3] = {1,2,3,4};
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}
#endif
#if 0
	//部分初始化
	int a[2][3] = {{1},{2,3}};
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}
#endif
#if 0
	//不指定长度初始化
	int a[][3] = {1,2,3,4,5,6};
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}
#endif
#if 0
	int a[][3] = {1,2,3,4};
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}
#endif
	//对数组清零
	int a[2][3] = {0};
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}
//	bzero(a,24);
	memset(a,0,24);
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}

	return 0;
}
