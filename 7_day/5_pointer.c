#include <stdio.h>

int main(void)
{   
	int i,*p,a[7];
	p=a;
	for(i=0;i<7;i++)
		scanf("%d",p++);
	printf("\n");
	p = a;
	for(i=0;i<7;i++)
	{
		printf("%d",*p);
		p++;
	}
	printf("\n");

	return 0;
}
