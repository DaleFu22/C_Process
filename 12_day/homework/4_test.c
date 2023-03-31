#include <stdio.h>
#include <string.h>

#define N 100

char * char_to_num(int num, char * s);

int main() 
{
	int m = 123;
	char str[N] = {0};

	printf("%s\n", char_to_num(m, str));
	puts(str);

	return 0;
}

char *char_to_num(int num, char * s)
{
	char *p,*q,t;
	p = q = s;

	while (num != 0) 
	{
		*s++ = num % 10 + 48;
		num /= 10;
	}
	*s = '\0';

	s--;
	//将转换得到的字符串翻转过来
	while (q < s)
   	{
		t = *q;
		*q = *s;
		*s = t;
		q++;
		s--;
	}

	return p;
}

