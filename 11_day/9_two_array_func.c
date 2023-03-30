#include <stdio.h>

void func(int p[][],int n);

int main(void)
{
	int a[][3] = {1,3,5,6,7,8};

	func(a,2);
}
#if 0
void func(int (*p)[3],int n)
{
	int i,j;
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < 3;j++)
		{
//			printf("%d\t",p[i][j]);
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}
}
#endif
#if 0
void func(int p[666][3],int n)
{
	int i,j;
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < 3;j++)
		{
//			printf("%d\t",p[i][j]);
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}
}
#endif
#if 1
void func(int p[][3],int n)
{
	int i,j;
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < 3;j++)
		{
//			printf("%d\t",p[i][j]);
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}
}
#endif
#if 0
//错误写法
void func(int p[][],int n)
{
	int i,j;
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < 3;j++)
		{
//			printf("%d\t",p[i][j]);
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}
}
#endif
