#include <stdio.h>

#define PI	3.14

int main(void)
{
	int r;
	float area;
	for(r = 1;r <= 10;r++)
	{
		area = PI*r*r;
		if(area > 100)
			break;
		printf("%f\n",area);
	}

	return 0;
}
