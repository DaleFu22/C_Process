#include <stdio.h>

int main(void)
{
	int i;
	char s[12];
	for(i = 0;i < 12;i++)
	{
		s[i] = getchar();
	}
	printf("%s\n",s);

	return 0;
}
