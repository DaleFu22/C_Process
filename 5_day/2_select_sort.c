#include <stdio.h>

int main(void)
{
	int i,j,temp;
	int a[7] = {3,5,1,2,9,8,7};

	for(i = 0;i < 7-1;i++)
	{
		for(j=i+1;j < 7;j++)
		{
			if(a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i = 0;i < 7;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");

	return 0;
}
