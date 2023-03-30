/**
  *实现一个函数：输入x和n两个数，求出x的n次方
  */
#include <stdio.h>
/*函数声明*/
void x_n(double,int);

/*主函数*/
int main(void)
{
	double x,ret;
	int n;
	printf("请输入x:");
	scanf("%lf",&x);
	printf("请输入n:");
	scanf("%d",&n);
	x_n(x,n);
//FIXME!!!
//	ret = 

//	printf("得到x的n次方为：%lf\n",);
}

/*功能函数*/
void x_n(double x,int n)
{
	double sum = 1;
	int i;
	for(i = 0;i < n;i++)
	{
		sum *= x;
	}
	printf("%lf\n",sum);
}
