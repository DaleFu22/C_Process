#include <stdio.h>

int main(void)
{
	int a = 15,b = 8,c;
	double x = 15,y = 8,z;
	c = a + b ;    // c 赋值为
	printf("c = %d\n",c);	
	c = a - b;      // c 赋值为
	printf("c = %d\n",c);	
	c = a * b;     // c 赋值为
	printf("c = %d\n",c);	
	c = a / b;      // c 赋值为
	printf("c = %d\n",c);	
	c = a % b;    // c 赋值为
	printf("c = %d\n",c);	
	z = x + y ;     //z 赋值为 
	printf("z = %lf\n",z);
	z = x - y;        // z 赋值为
	printf("z = %lf\n",z);
	z = x * y ;     // z 赋值为
	printf("z = %lf\n",z);
	z = x / y ;     // z 赋值为
	printf("z = %lf\n",z);


	return 0;
}
