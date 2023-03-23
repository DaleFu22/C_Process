#include <stdio.h> 

int main(void) 
{ 
	int i,j; 
	for (i=4;i>=1;i--) 
	{ 
		printf("*"); 
		for (j=1;j<=4-i;j++) 
			printf("*"); 
		printf("\n"); 
	} 
} 

