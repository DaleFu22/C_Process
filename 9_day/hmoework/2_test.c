#include <stdio.h>

int main(void)
{
	char a[50] = "Hello";
	char *b = " world";
	char *p = a;
	char *q = b;
#if 0
	while(*p != '\0')
	{
		p++;
	}

	while(*q != '\0')
	{
		*p = *q;
		p++;
		q++;
	}
#endif
	while(*p++ != '\0');
	p = p-1;
	while(*p++ = *q++);
	*p = *q;//将*q最末尾的\0赋值给*p的末尾。
	printf("%s\n",a);

	return 0;
}
