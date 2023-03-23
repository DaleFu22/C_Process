#include <stdio.h>

int main(void)
{
	double sum = 0;
	int i = 0;
	int j = 1;
	for(i = 1;i < 100;i++)
	{
		sum = sum+j*1.0/i;
		j = -j;
	}
	printf("%lf\n",sum);
}
