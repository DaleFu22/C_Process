#include <stdio.h>
#include <strings.h>

int main(void)
{
	char buf[BUFSIZ];
	bzero(buf,BUFSIZ);

	int i=0,j,k;
	char temp;
	printf("Please input:");
	while((buf[i++] = getchar()) != '\n');
#if 1
	for(j = 0;j < i/2;j++)
	{
		temp = buf[j];
		buf[j] = buf[i-1-j];
		buf[i-1-j] = temp;
	}
	printf("%s\n",buf);
#else
	for(j = 0;j < i;j++)
	{
		temp = buf[j];
		buf[j] = buf[i-1];
		buf[i-1] = temp;
		i--;
	}
	printf("%s\n",buf);
#endif
	return 0;
}
