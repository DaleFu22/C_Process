#include <stdio.h> 

int main(void) 
{ 
	int i,j,k; 
	for (i=1;i<=6;i++) 
	{ 
		for (j=1;j<=20-2*i;j++) 
			putchar(' '); 
		for (k=1;k<=i;k++) 
			printf("%d",i);
		printf("\n"); 
	} 
} 

