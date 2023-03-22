#include <stdio.h>

int main(void)
{
	int i = 0;
	char c;
	char s[30] = {0};

	while((c = getchar()) != '\n')
	{
		s[i++] = c;
	}
	printf("%s\n",s);

	return 0;
}
