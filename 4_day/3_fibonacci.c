#include <stdio.h>

int main(void)
{	
	int i,  data[10];
	data[0]= data[1]=1;

	for(i=2;i<10;i++)
	{
		data[i]= data[i-2]+ data[i-1];
	}

	for(i=9;i>=0;i--)
	{
		printf("%d\n",data[i]);
	}

	return 0;
}

