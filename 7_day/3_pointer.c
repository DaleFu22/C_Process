#include <stdio.h>

int main(void)
{
	int a[6] = {1,2,3,4,5,6};
	int *p = a;

	printf("a[2] = %d\n",a[2]);
	printf("*p+2 = %d\n",*p+2);
	printf("*a+2 = %d\n",*a+2);

	printf("a[1] = %d\n",a[1]);
	printf("*(a+1) = %d\n",*(a+1));
	printf("*p+1 = %d\n",*p+1);
	printf("*a+1 = %d\n",*a+1);
	printf("*++p = %d\n",*++p);


	return 0;
}
