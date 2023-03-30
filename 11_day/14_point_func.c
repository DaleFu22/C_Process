#include <stdio.h>
#include <string.h>

char * delspace(char * s);

int main() 
{
	char str[] = "  How   are   you?";
	printf("删除前:%s\n",str);
	printf("删除后:%s\n", delspace(str));
//	puts(str);

	return 0;
}

char * delspace(char * s) {
	char * p = s;
	char * t = s;

	while (*s != '\0') {
		if (*s != ' ') {
			*p = *s;
			p++;
		}
		s++;
	}
	*p = 0;

	return t;
}

