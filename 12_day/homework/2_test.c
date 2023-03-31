#include <stdio.h>

void print_array(int (*p)[3],int row);
int * find_max_min(int (*p)[3],int row);

int main(void)
{
	int a[2][3] = {0};
	int *p;
	printf("Please input 6 numbers:");
	int i,j;
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	print_array(a,2);	
	p = find_max_min(a,2);
	printf("最大值:%d\n",*(p+0));
	printf("最小值:%d\n",*(p+1));

	return 0;
}

void print_array(int (*p)[3],int row)
{
	int i,j;
	for(i = 0;i < row;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d\t",p[i][j]);
		}
		puts("");
	}
}

int * find_max_min(int (*p)[3],int row)
{
	int i,j;
	static int find[2];
	find[0] = p[0][0];
	find[1] = p[0][0];
	for(i = 0;i < row;i++)
	{
		for(j = 0;j < 3;j++)
		{
			if(find[0] < p[i][j])
			{
				find[0] = p[i][j];
			}
			if(find[1] > p[i][j])
			{
				find[1] = p[i][j];
			}
		}
	}
	return find;
}

