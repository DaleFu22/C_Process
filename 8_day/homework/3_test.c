#include <stdio.h>

int main(void)
{
	int a = 0;
	int i = 0;
	int arr[40] = {0};

	scanf("%d",&a);

	while(a)
	{
		arr[i++] = a%2;
		a = a/2;
	}

	for (int j = i-1; j >= 0; j--)
	{
		printf("%d",arr[j]);
	}

	return 0;
}

