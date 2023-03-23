#include <stdio.h>

int main(void)
{
	int i,j,temp = 0,s = 0;
	printf("===============================================================\n");
	printf("求解s = 1+(1+2)+(1+2+3)+...+(1+2+3+4+...+n)\n");
	for(i = 1;i <= 4;i++)
	{
		for(j = 1;j <= i;j++)
		{
			temp += j;
		}
		s += temp;
		temp = 0;
	}
	printf("s = %d\n",s);

	return 0;
}

