#include <stdio.h>

int main(void)
{
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	int *p = a;
	int *q = (int *)&a;

	printf("*(p+1) = %d\n",*(p+1));
	printf("*(q+1) = %d\n",*(q+1));
	printf("*(&a+1) = %d\n",**(&a+1));

	return 0;
}
