#include <stdio.h>

int main(void)
{
	int i,num;
	printf("请输入一个大于或等于3的数:");
	scanf("%d",&num);
	while(num < 3)
	{
		printf("对不起，您输入有误，请重输(该数需大于等于3):");
		scanf("%d",&num);
	}

	for(i = 2;i < num;i++)
	{
		if(num%i == 0)
			break;
	}
	if(num == i)
	{
		printf("%d是素数\n",num);
	}
	else
	{
		printf("%d不是素数\n",num);
	}
}
