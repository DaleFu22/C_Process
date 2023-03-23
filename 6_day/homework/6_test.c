#include <stdio.h> 

int main(void) 
{ 
	int i,j,k; 
	for (i=1;i<=6;i++) 
	{ 
		for (j=1;j<=20-3*i;j++) 
			putchar(' '); 
		for (k=1;k<=i;k++) 
			printf("%d",k); 
		for (k=i-1;k>0;k--) 
			printf("%d",k); 
		printf("\n"); 
	} 
} 

