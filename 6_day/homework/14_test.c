#include <stdio.h>

int main(void)
{
	int i,j,a,b,c,d;

	for(i = 1000;i < 10000;i++)
	{
		a = i%10;
		b = i/10%10;
		c = i/100%10;
		d = i/1000;
		for(j = 2;j < i;j++)
		{
			if((i == j*j) && (a*c == 12) && (b+d == 10))
			{
				printf("%d\n",i);
			}
		}
	}

	return 0;
}
