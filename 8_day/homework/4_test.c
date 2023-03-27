#include <stdio.h>

int main(void)
{
	int num,n,i;
	int a[10] = {1,2,3};
	for(i = 0;i < 10;i++)
	{
		printf("%d\t",a[i]);
	}

	printf("\n请输入要增加的元素:");
	scanf("%d",&num);
	printf("请输入要插入的位置:");
	scanf("%d",&n);

	while(n < 0 || n > 10)
	{
		printf("您输入的位置不合法(0~10)，请重新输入:");
		scanf("%d",&n);
	}

	for(i = 9;i > n;i--)
	{
		a[i] = a[i-1];
	}
	a[n] = num;
	for(i = 0;i < 10;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
	return 0;
}
