#include <stdio.h>

int main(void)
{
	int i,j,a,b,c;
	for(i = 200;i <=300;i++)
	{
		a = i%10;
		b = i/10%10;
		c = i/100;
		if((a*b*c == 42) && (a+b+c == 12))
		{
			printf("%d\n",i);
		}	
	}
}
