#include <stdio.h>

int main(void)
{
	int i,j,sum=0;
	int a[5][5] = {
				{1,7,3,7,9},
				{11,43,6,7,0},
				{22,7,8,9,10},
				{11,45,66,78,23},
				{1,2,3,4,5}
	};
	for(i = 0;i < 5;i++)
	{
		for(j = 0;j < 5;j++)
		{
			if(i == j)
			{
				sum += a[i][j];
			}
			if(4 == i+j)
			{
				sum += a[i][j];
			}
		}
	}
//	sum -= a[5/2][5/2];
	printf("对角线之和sum = %d\n",sum);

	return 0;
}
