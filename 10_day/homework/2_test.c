#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str[12] = {"junjie","zijun","qianxu","lesan","zhoujian","dengcheng","weiliang","wenjuan","zhenguo","wenjie","renkang","liming"};
	int i,j;
	char *temp;

	for(i = 0;i < 12;i++)
	{
		printf("%s\t",str[i]);
	}
	puts("");
//	printf("str[1] = %p\n",str[1]);
//	printf("sizeof(str) = %lu\n",sizeof(str));

	for(i = 0;i < 12-1;i++)
	{
		for(j = i+1;j < 12;j++)
		{
			if(strcmp(str[i],str[j]) > 0)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}

	for(i = 0;i < 12;i++)
	{
		printf("%s\t",str[i]);
	}
	puts("");

	return 0;
}
