/**
  *编写函数，实现输入两个数据然后完成数据交换 
  */

#include <stdio.h>

/*函数声明*/
void swap(int *p,int *q);

/*主函数*/
int main(void)
{
	int m,n;
	printf("请输入两个数字:");
	scanf("%d%d",&m,&n);
	printf("交换前:m = %d\tn = %d\n",m,n);
	swap(&m,&n);
	printf("交换后:m = %d\tn = %d\n",m,n);

	return 0;
}

/*功能函数：实现数据的交换*/
void swap(int *p,int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

