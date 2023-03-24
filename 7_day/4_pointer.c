#include <stdio.h>

int  main(void)
{   
	int a[]={5,8,7,6,2,7,3};
	int y,*p=&a[1];
	y=(*--p)++;
	//  --p; y=(*p)++
	printf("%d",y);
	printf("%d",a[0]);
} 

