#include <stdio.h>

int main(void)
{
	int i;
	int a[6] = {1,2,3,4,5,6};

	printf("数组的大小:%lu个字节\n",sizeof(a));
	printf("访问第一个元素:%d\n",a[1]);
#if 0
	printf("%lu",a);
#endif
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");

	return 0;
}
