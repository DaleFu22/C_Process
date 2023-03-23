#include <stdio.h>

int main(void)
{
	int i;
	float j,sum = 0;
	printf("===============================================================\n");
	printf("求1-1/2+1/3-1/4+...+1/99-1/100\n");
	for(i = 1,j = 1;i <= 100;i++,j++)
	{
		if(i%2 != 0)
		{
			sum += 1/j;
		}
		else
		{
			sum -= 1/j;
		}
	}
	printf("sum = %f\n",sum);
}

