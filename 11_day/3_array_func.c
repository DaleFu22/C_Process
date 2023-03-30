#include <stdio.h>

//void array_func(int *p);
void array_func(int arr[],int n);

int main(void)
{
	int a[6] = {1,2,3,6,8,4};

	array_func(a,6);//a = &a[0]
	printf("%d\n",a[3]);
	return 0;
}
#if 0
void array_func(int *p)
{
	int i;
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",*(p+i));
//		printf("%d\t",p[i]);
	}
	printf("\n");
}
#endif
#if 0
void array_func(int arr[])
{
	int i;
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",arr[i]);
	}
	puts("");
}
#endif

void array_func(int arr[],int n)
{
	int i;
	for(i = 0;i < n;i++)
	{
		printf("%d\t",arr[i]);
	}
	puts("");
	arr[n-3] = 888;
}
