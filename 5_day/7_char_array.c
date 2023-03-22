#include <stdio.h>

int main(void)
{
	int i;
#if 1
	//逐个字符初始化
	char ch1[6] = {'h','e','l','l','o','p'};
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",ch1[i]);
	}
	printf("\n");
	printf("%s\n",ch1);
	printf("sizeof(ch1) = %lu\n",sizeof(ch1));
#endif
#if 1
	char ch2[6] = {"hellop"};
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",ch2[i]);
	}
	printf("%s\n",ch2);
	printf("\n");
	printf("sizeof(ch2) = %lu\n",sizeof(ch2));
#endif
#if 0
	char ch[6] = "hellop";
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",ch[i]);
	}
	printf("\n%s",ch);
	printf("\n");
#endif
	char ch[] = "hellop";
	printf("%s\n",ch);
	printf("sizeof(ch) = %lu\n",sizeof(ch));
	return 0;
}
