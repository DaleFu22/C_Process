#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[50] = "abcd";
	char b[10] = "ABCDE";

	int i,j,k;
	i = strlen(a);
	j = strlen(b);
	printf("i = %d\tj = %d\n",i,j);

	for(k = 0;k < j;k++,i++)
	{
		a[i] = b[k];
	}
	printf("%s\n",a);

	return 0;
}
