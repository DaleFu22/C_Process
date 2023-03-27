#include <stdio.h>

int main(void)
{
	int a[3][3] = {
				{3,5,1},
				{0,9,7},
				{3,2,8}
	};
	printf("***(&a) = %d\n",***(&a));
	printf("***(&a+1) = %d\n",***(&a+1));
	printf("**(a) = %d\n",**(a));
	printf("**(a+1) = %d\n",**(a+1));
	printf("*(a[0]) = %d\n",*(a[0]));
	printf("*(a[0]+1) = %d\n",*(a[0]+1));

	return 0;
}
