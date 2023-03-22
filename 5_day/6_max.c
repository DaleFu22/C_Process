#include <stdio.h>

int main(void)
{
	int i,j,row,column,max;
	int a[3][4] = {
				   {1,5,2,3},
				   {9,7,6,22},
				   {76,99,0,66}
				  };
	
	max = a[0][0];
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 4;j++)
		{
			if(a[i][j] > max)
			{
				max = a[i][j];
				row = i;
				column = j;
			}
		}
	}
	printf("max = %d\n行号:%d\n列号:%d\n",max,row,column);

	return 0;
}
