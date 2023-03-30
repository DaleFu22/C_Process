#include <stdio.h>

/*全局变量*/
int a;

/*函数声明*/
void func(void);

/*主函数*/
int main(void)
{
	printf("调用函数前:a = %d\n",a);
	func();
	printf("调用函数后:a = %d\n",a);
	
	a = 9567;
	printf("主函数更改后:a = %d\n",a);

	return 0;
}

/*功能函数*/
void func(void)
{
	a = 12138;
}
