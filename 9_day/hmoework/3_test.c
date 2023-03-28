#include <stdio.h>

int main(void)
{
	int a[2][3] = {1,2,3,4,5,6},*p[2] = {a[0],a[1]};
	int i,j,sum=0;
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	puts("");//换行
#if 0
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			sum += *(*(p+i)+j);
		}
	}
#endif
	for(i = 0;i < 6;i++)
	{
		sum += *(*p+i);
	}
	printf("%d\n",sum);

	return 0;
}
