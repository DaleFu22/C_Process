#include <stdio.h>
#include <string.h>

int main(void)
{
	//strcat()函数的使用
	char str1[] = "年轻人";
	char str2[] = " 耗子尾汁";

	printf("%lu\n",sizeof(str1));
	printf("%lu\n",sizeof(str2));
	
	strcat(str1,str2);
	printf("%s\n",str1);

	return 0;
}
