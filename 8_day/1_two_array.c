#include <stdio.h>

int main(void)
{
	int a[2][3] = {2,5,7,4,3,9};
	int *p = &a[0][0];
	int i,j;
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	puts("");
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",*(p+i));
	}
	puts("");
	printf("%d\n",*p);

	return 0;
}
