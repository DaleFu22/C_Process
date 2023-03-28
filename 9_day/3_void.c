#include <stdio.h>

int main()
{
	int a[] = {3, 5, 9, 2, 6};
	int i, n;
	void * p;

	p = a;
	n = sizeof(a) / sizeof(int);
	for (i = 0; i < n; i++) {
		printf("%d ", *((int *)p+i));
	}
	puts("");

	return 0;
}

