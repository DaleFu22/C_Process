#include <stdio.h>

int main(void)
{
	int i,j,a,b,c,a1,b1,c1;
	for(i=100;i<1000;i++)
	{
		a=i%10;
		b=i/10%10;
		c=i/100;
		for(j=1,a1=1;j<=a;j++)
		{
			a1*=j;
		}
		for(j=1,b1=1;j<=b;j++)
		{
			b1*=j;
		}
		for(j=1,c1=1;j<=c;j++)
		{
			c1*=j;
		}
		a=a1;
		b=b1;
		c=c1;
		if(i==a+b+c)
			printf("%d\n",i);
	}
	return 0;
}
