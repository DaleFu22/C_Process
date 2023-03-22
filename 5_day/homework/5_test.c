#include <stdio.h>

int main(void)
{
	int i,j,sum;
	for(i = 1,j = 1;i < 5;i++,j += 2)
	{
		if(i%2 == 0)
		{
			sum -= j;
		}
		else
		{
			sum += j;
		}
	}
	printf("sum = %d\n",sum);

	return 0;
}
