#include <stdio.h>

int main(void)
{
	int num,i,ret = 0;
	printf("输入一个正整数，将其逆序输出:");
	scanf("%d",&num);
	do{
		i = num%10;
		ret = ret*10+i;
		num = num/10;
	}while(num > 0);

	printf("%d\n",ret);

	return 0;
}

