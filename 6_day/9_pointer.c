#include <stdio.h>

int main(void)
{
	int a[6] = {6,5,4,3,2,1};
	int *p = a;
	int *q = &a[3];

	printf("%d\n",p>q);

	return 0;
}
