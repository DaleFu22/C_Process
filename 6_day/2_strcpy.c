#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "鸡你太美";
	char str2[] = "你干嘛~哎哟！";

	printf("%s\t%s\n",str1,str2);
	printf("%lu\n",sizeof(str1));
	printf("%lu\n",sizeof(str2));

	strcpy(str1,str2);

	printf("%s\n",str1);

	return 0;
}
