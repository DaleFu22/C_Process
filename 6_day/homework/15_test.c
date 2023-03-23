#include <stdio.h>

int main(void)
{
	int i,j,a,b,c,d;
	for(i = 0,j =0;i < 201;i++)
	{
		if((i%2 == 1) && (i%3 == 1) && (i%5 == 1))
		{
			printf("%d\t",i);
			j++;
		}
		if(j == 10)
			return 0;
	}

	printf("\n");
	return 0;
}
