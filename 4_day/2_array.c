#include <stdio.h>
#include <strings.h>
#include <string.h>

int main(void)
{
	int i;
#if 0
	int a[5] = {1,2,3,4,5};
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
#endif
#if 0
	int a[5] = {1,2,3};
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
#endif
#if 0
	int a[5];
	bzero(a,20);
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
#endif
#if 0
	int a[5];
	memset(a,0,sizeof(int)*5);
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
#endif
#if 0
	int a[5]={1,2,[4]=666};
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
#endif
#if 0
	int a[]={1,2,3,4,5,6,7};
	for(i = 0;i < sizeof(a)/sizeof(int);i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
#endif
	static int a[5];
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
}
