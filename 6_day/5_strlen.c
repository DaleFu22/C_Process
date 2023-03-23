#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	char s1[BUFSIZ] = "How are you?";
	
	n = strlen(s1);
	printf("%lu\n",sizeof(s1));
	printf("n = %d\n",n);

	return 0;
}
