#include <stdio.h>

int main(void)
{
	int i,sum = 0;

	for(i = 0;i < 101;i++)
	{
		sum += i;
	}
	printf("%d\n",sum);

	return 0;
}
