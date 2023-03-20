#include <stdio.h>

int main(void)
{
	int ret,a;
	char b;
	float c;
	ret = scanf("%d %c %f",&a,&b,&c);

	printf("%d\t%c\t%f\n",a,b,c);
	printf("ret = %d\n",ret);
}
