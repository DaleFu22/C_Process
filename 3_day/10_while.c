#include <stdio.h>

int main(void)
{
	int i = 99,a,b,c;
	while(i < 1000)
	{
		a = i%10;//个位
		b = i/10%10;//十位
		c = i/100;//百位
		if((a*a*a+b*b*b+c*c*c) == i)
		{
			printf("%d\n",i);
		}
		i++;
	}

	return 0;
}
