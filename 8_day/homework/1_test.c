#include <stdio.h>

int main(void)
{
	int up = 0,
		low = 0,
		number = 0,
		k = 0,
		el = 0;
	char ch;

	while((ch = getchar()) != '\n')
	{
		if(ch >= 'A' && ch <= 'Z')
			up++;
		else if(ch >= 'a' && ch <= 'z')
			low++;
		else if(ch >= '0' && ch <= '9')
			number++;
		else if(ch == ' ')
			k++;
		else
			el++;
	}
	printf("up=%d,low=%d,number=%d,k=%d,el=%d\n",up,low,number,k,el);

	return 0;
}
