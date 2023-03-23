#include <stdio.h> 

int main(void) 
{ 
	int s=0,k; 
	for (k=7;k>=0;k--) 
	{ 
		switch(k) 
		{ 
			case 1: 
			case 4: 
			case 7: s++; break; 
			case 2: 
			case 3: 
			case 6: break; 
			case 5: s+=2; break; 
		} 
	} 
	printf("s = %d\n",s); 
} 

