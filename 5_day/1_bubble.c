#include <stdio.h>

int main(void)
{
	int i,j,temp,num=0;
	int a[7] = {3,5,1,2,9,8,7};
	for(i = 0;i < 7-1;i++)
	{
		for(j = 0;j < 6-i;j++)
		{
			if(a[j] > a[j+1])
			{
				num++;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		if(num == 0)
		{
			break;
		}
		num = 0;
	}
	for(i = 0;i < 7;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");

	return 0;
}
