#include <stdio.h>

int main(void)
{
	int a = 0;
	int m = 0;
	scanf("%d",&a);
	int n = a;
	while(n != 0)
	{
		m = n%10;
		n = n/10;
		printf("%d",m);
	}
	printf("\n");

	return 0;
}
