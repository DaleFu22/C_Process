#include <stdio.h>

int main(void)
{
	int x;
	char ch;
	scanf("%d",&x);
	while(getchar() != '\n');
	scanf("%c",&ch);

	printf("x = %d\tch = %d\n",x,ch);

	return 0;
}
