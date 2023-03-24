#include <stdio.h>

int main(void)
{
	int a[6] = {5,3,7,6,0,4};
#if 0
	int i;
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
#endif
#if 0
	int i;
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",*(a+i));
	}
	printf("\n");
#endif
#if 0
	int i;
	int *p = a;
//	int *p = &a[0];
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",*(p+i));
	}
	puts("");
#endif
#if 0
	int *p;
	for(p = a;p < a+6;p++)
	{
		printf("%d\t",*p);
	}
	puts("");
#endif
#if 0
	int i;
	int *p = a;
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",p[i]);
	}
	puts("");
#endif
	int i;
	int *p = a;
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",i[p]);
	}
	puts("");
	return 0;
}
