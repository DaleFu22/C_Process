#include <stdio.h>

int main(void)
{
	int a=567;printf ( "%d\n",a);	//567
	int b=255;printf("%x\n",b);		//ff
	int c=65;printf("%o\n",c);		//101
	int d=567;printf("%u\n",d);		//567
	char e=65;printf("%x\n",e);		//A
	printf("%s\n","ABC");			//ABC
	float f=567.789;printf("%e\n",f);	//5.677890e+02
	float g=5672236.78932;printf("%g\n",g);	// 567.789000
	float h=567.789;printf("%g\n",h);	// 567.789
	printf("%%\n");			 //%


	return 0;
}
