#include <stdio.h>

int main(void)
{
	int i;
	char str[][7] = {"How","are","you"};
	printf("%s\n",*str);

	for(i = 0;i < 3;i++)
	{
		printf("%s\t",str[i]);
	}

	return 0;
}
