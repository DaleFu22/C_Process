#include <stdio.h>

int main(void)
{
	int i=0,sum=0;
	do{
		i++;
		sum += i;
	}while(i < 100);
	printf("sum = %d\n",sum);

	return 0;
}
