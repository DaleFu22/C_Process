#include <stdio.h>
#include <strings.h>

int main(void)
{
	int i,j;
	int a[10][10];
	bzero(a,100*sizeof(int));
	a[0][0]=1;
	for(i = 1;i < 10;i++)
	{
		a[i][0] = 1;
		for(j = 1;j < 10;j++)
		{
			a[i][j] = a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i = 0;i < 10;i++)
	{
		for(j = 0;j <= i;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}

	return 0;
}
