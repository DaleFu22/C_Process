#include <stdio.h>

int main()
{
	int *p, *q, a[] = {3, 9, 2, 5, 6}, n, t, i;

	n = sizeof(a)/sizeof(n);

	p = &a[0];
	q = &a[n-1];

	while (p < q) 
	{
		t = *p;
		*p = *q;
		*q = t;
		p++;
		q--;
	}
	for (i = 0; i < n; i++) 
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
}

