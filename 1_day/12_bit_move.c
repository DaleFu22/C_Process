#include <stdio.h>

int n;

void fun()
{
	int i;
	int temp = 0;

	for( i = 7; i >= 0; i -- )
	{
		temp = ( n >> 4 * i ) & 15;//和 1111(二进制) 进行与运算，得到十六进制的最后一位；//右移四位，继续与运算。

		if( temp > 9)
			printf(" %c\n",temp-10+'A');//大于9则转换成十六进制，将10、11、12、13、14、15对应输出为 A、B、C、D、E。

		else
			printf("%d\n",temp);

	}
}

int main()

{
	printf("enter a number:");
	scanf("%d",&n);
	fun();

	return 0;
}
