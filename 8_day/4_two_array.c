#include <stdio.h>

int main(void)
{
	int i,j;
	int a[2][3] = {1,3,6,2,8,0};
	int (*p)[3] = a;
	printf("%d\n",*(*(p+1)+1));
	printf("%d\n",p[1][1]);

	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}
	}
	puts("");
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d\t",p[i][j]);
		}
	}
	puts("");

	return 0;
}
