#include <stdio.h>
#include <strings.h>

int main(void)
{
	int i = 0,j;
	char temp;
	char buf[BUFSIZ];
	bzero(buf,BUFSIZ);

	printf("Please input:");
	while((buf[i++] = getchar()) != '\n');
#if 0
	for(j = 0;j < i/2;j++)
	{
		temp = buf[j];
		buf[j] = buf[i-1-j];
		buf[i-1-j] = temp;
	}
#else
	for(j = 0;j < i;j++)
	{
		temp = buf[j];
		buf[j] = buf[i-1];
		buf[i-1] = temp;
		i--;
	}
#endif

	printf("%s\n",buf);

	return 0;
}
