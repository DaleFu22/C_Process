#include <stdio.h>

int main(void)
{
	int i;
	char s1[5] = {'h','e','l','l','o'};//挨个字符赋值初始化
	printf("=========================s1==========================\n");
	for(i = 0;i < 5;i++)
	{
		printf("%c",s1[i]);
	}
	printf("\n");
	printf("%s\n",s1);

	char s2[5] = {"hello"};//字符串常量赋值初始化
	printf("=========================s2==========================\n");
	for(i = 0;i < 5;i++)
	{
		printf("%c",s2[i]);
	}
	printf("\n");
	printf("%s\n",s2);

	char s3[5] = "hello";
	printf("=========================s3==========================\n");
	for(i = 0;i < 5;i++)
	{
		printf("%c",s3[i]);
	}
	printf("\n");
	printf("%s\n",s3);

	char s4[] = "hello";
	printf("=========================s4==========================\n");
	for(i = 0;i < 5;i++)
	{
		printf("%c",s4[i]);
	}
	printf("\n");
	printf("%s\n",s4);

	printf("==========================size========================\n");
	printf("s1:%lu\n",sizeof(s1));
	printf("s2:%lu\n",sizeof(s2));
	printf("s3:%lu\n",sizeof(s3));
	printf("s4:%lu\n",sizeof(s4));


	return 0;
}

