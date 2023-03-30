/**
  *实现一个函数：输入x和n两个数，求出x的n次方
  */
#include <stdio.h>


double x_n(double k,int j)
{
	double sum = 1;
	int i;
	for(i = 0;i < j;i++)
	{
		sum *= k;
	}
	return sum;
}

int main(void)
{
	double x,ret;
	int n;

	printf("请输入x:");
	scanf("%lf",&x);
	printf("请输入n:");
	scanf("%d",&n);

//	ret = x_n(x,n);

//	printf("得到x的n次方为：%lf\n",ret);
//	printf("得到x的n次方为：%lf\n",x_n(x,n));
	ret = x_n(x_n(x_n(2,2),2),3);
	printf("得到x的n次方为：%lf\n",ret);

}

