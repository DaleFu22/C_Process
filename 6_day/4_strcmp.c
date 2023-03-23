#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "ABC";
	char s2[] = "abc";
	int n,m;

	n = strcmp(s2,s1);
	m = strncasecmp(s1,s2,3);

	printf("n = %d\n",n);
	printf("m = %d\n",m);

	return 0;
}
