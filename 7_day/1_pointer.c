#include <stdio.h>

int main(void)
{
	int i = 10;
	int *p = &i;
#if 1
	int **q  = &p;
	int ***m = &q;
#else
	int **q = &(&i);
	int ***m = &&&i;
#endif
	
	printf("i = %d\n",i);
	printf("*p = %d\n",*p);
	printf("**q = %d\n",**q);
	printf("***m = %d\n",***m);

	printf("&i = %p\n",&i);
	printf("p = %p\n",p);
	printf("&p = %p\n",&p);
	printf("q = %p \n",q);
	printf("&q = %p\n",&q);
	printf("m = %p\n",m);

	return 0;
}
