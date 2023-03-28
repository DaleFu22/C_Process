#include <stdio.h>

int main(int argc,const char *argv[])
{
	int i;
	printf("argc = %d\n",argc);

//	argv[1][1] = 'A';//不合法，因为char *argv[]是const修饰的
	for(i = 0;i < argc;i++)
	{
		printf("%s\n",argv[i]);
	}

	return 0;
}
