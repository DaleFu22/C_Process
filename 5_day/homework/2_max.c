#include <stdio.h>

int main(void)
{
	int a,b,c,max;
	printf("Please Input :");
	scanf("%d%d%d",&a,&b,&c);

	max = a;
	if(b > max)
	{
		max = b;
	}
	if(c > max)
	{
		max = c;
	}

	printf("max = %d\n",max);
	
}
