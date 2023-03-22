#include <stdio.h>

int main(void)
{
	int num;
	printf("Please Input a number:");
	scanf("%d",&num);

	//FIXME!!!

	switch(num/10)
	{
		case 0:
		case 1:
		case 2:
		{
			printf("m = 1\n");		
		}
		break;
		case 3:
		{
			printf("m = 2\n");		
		}
		case 4:
		break;
		{
			printf("m = 3\n");		
		}
		break;
		case 5:
		{
			printf("m = 4\n");		
		}
		break;
		default:
		{
			printf("m = 5\n");
		}
		break;
	}

	return 0;
}
