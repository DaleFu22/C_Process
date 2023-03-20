#include <stdio.h>

int main(void)
{
	float num;
	int i,n;
	printf("请您输入一个数:");
	scanf("%f",&num);
	while((int)num != num)
	{
		printf("请重新输入(该数必须是整数):");
		scanf("%f",&num);
	}
	n = (int)num;
	for(i = 2;i < n;i++)
	{
		if(n%i == 0)
			break;
	}
	if(n == i)
	{
		printf("%.0f是素数\n",num);
	}
	else
	{
		printf("%.0f不是素数\n",num);
	}

	return 0;
}
