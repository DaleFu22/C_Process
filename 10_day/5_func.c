#include <stdio.h>

void swap(int a, int b);

int main()
{
	int m = 10, n = 20;

	swap(m, n);

	printf("main:%d %p %d %p\n", m, &m, n, &n);

	return 0;
}

void swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
	printf("swap:%d %p %d %p\n", a, &a, b, &b);
}

