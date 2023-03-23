#include <stdio.h>

int main(void)
{
	int i,j;
	int n;
	int s = 0;
	printf("请输入n的值:");
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		for(j = 1;j<=i;j++)
			s = s+j;
	}
	printf("%d\n",s);
}
