#include <stdio.h>

int main(void)
{
	int i,j,num;
	int a[10] = {1,2,3,4,5,6,7,8,9};
	for(j = 0;j < 10;j++)
	{
		printf("%d\t",a[j]);
	}
	puts("");

	printf("请输入要删除的元素:");
	scanf("%d",&num);
	for(i = 0;i < 10;i++)
	{
		if(num == a[i])
			break;
	}
	while(i == 10)
	{
		printf("该元素不存在，请重新输入:");
		scanf("%d",&num);
		for(i = 0;i < 10;i++)
		{
			if(num == a[i])
				break;
		}
	}
	for(j = i+1;j < 10;j++)
	{
		a[j-1] = a[j];
	}
	for(j = 0;j < 10;j++)
	{
		printf("%d\t",a[j]);
	}
	puts("");

	return 0;
}
