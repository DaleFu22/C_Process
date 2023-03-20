#include <stdio.h>

int main(void)
{
	int i = 0,sum = 0;
	while(i < 100)
	{
		sum += i;
		i++;
	}
	printf("sum = %d\n",sum);

	return 0;
}
